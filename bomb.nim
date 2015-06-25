import enums
import entity, ivisible, icollidable

const 
    w: int32 = 30
    h: int32 = 30

type
    Bomb* = ref object of Entity

proc newBomb*(x, y: int32): Bomb =
    result = Bomb(visible: newVisibleNormal(x,y,w,h, SpriteE.bomb),
        collidable: newCollidableNormal(x,y,w,h))
