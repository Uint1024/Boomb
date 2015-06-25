import enums, engine
import sprite

type
    IVisible* = ref object of RootObj
        #invisible impl has a sprite too because
        #the invisibility could be temporary
        sprite: Sprite
    VisibleNormal* = ref object of IVisible
    Invisible* = ref object of IVisible

proc newVisibleNormal*(x, y, w, h: int32, sprite: SpriteE): VisibleNormal =
    result = VisibleNormal(sprite: newSprite(x,y,w,h,sprite))

proc newInvisible*(x, y, w, h: int32, sprite: SpriteE): Invisible =
    result = Invisible(sprite: newSprite(x,y,w,h,sprite))

method draw*(impl: IVisible) =
    echo "ivisible Should be overriden !"

method draw*(impl: VisibleNormal) =
    engine.drawSprite(impl.sprite)

method draw*(impl: Invisible) =
    discard

method move*(impl: IVisible, x, y: int32) =
    impl.sprite.move(x, y)

proc moveTo*(impl: IVisible, x, y: int32) =
    impl.sprite.moveTo(x, y)
