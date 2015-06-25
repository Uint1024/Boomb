import entity
import enums
import icollidable, ivisible, iupdatable

const
    w: int32 = 30
    h: int32 = 30

type
    Player* = ref object of Entity

proc newPlayer*(x, y: int32): Player =

    result = Player(visible: newVisibleNormal(x,y,w,h,SpriteE.player),
        collidable: newCollidableNormal(x,y,w,h),
        updatable: newUpdatablePlayer())
