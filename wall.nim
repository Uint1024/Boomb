import entity

const
    w: int32 = 40 
    h: int32 = 40

type
    Wall* = ref object of Entity

import icollidable, ivisible
import enums
proc newWall*(x, y: int32): Wall =
    result = Wall(visible: newVisibleNormal(x,y,w,h,SpriteE.wall),
        collidable: newCollidableNormal(x,y,w,h))
