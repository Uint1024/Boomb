
import sdl2
import box
import enums

type
    Sprite* = ref object
        box: Box
        spriteType: SpriteE
        
proc newSprite*(x, y, w, h: int32, spriteType: SpriteE): Sprite =
    result = Sprite(box: (x, y, w, h), spriteType: spriteType)

proc move*(obj: Sprite, x, y: int32) =
    obj.box.x += x
    obj.box.y += y

proc moveTo*(obj: Sprite, x, y: int32) =
    obj.box.x = x
    obj.box.y = y

proc getBox*(obj: Sprite): ptr Rect =
    addr obj.box

proc getSpriteType*(obj: Sprite): SpriteE =
    obj.spriteType
