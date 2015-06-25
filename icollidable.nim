import sdl2
import basic2d
import box

type
    ICollidable* = ref object of RootObj
        box: Rect

    CollidableNormal* = ref object of ICollidable
    NotCollidable* = ref object of ICollidable


proc newCollidableNormal*(x, y, w, h: int32): CollidableNormal =
    result = CollidableNormal(box: (x,y,w,h))

proc newNotCollidable*(x, y, w, h: int32): NotCollidable =
    result = NotCollidable(box: (x,y,w,h))

method collide*(impl: ICollidable) =
    echo "icollidable Should be overriden !"

#import wall
#method collide*(impl: CollidableNormal, tempMovement: Tvector2d,
#    map: seq[Wall]): tuple[x:int32,y:int32] =
#    var tempBox = impl.box #copy the box into a temp one 
#    tempBox.x = tempBox.x + int32 tempMovement.x
#    tempBox.y = tempBox.y + int32 tempMovement.y
#
#    var nbCollisions: array[4, int]
#    var nilPtr: ptr Box = nil
#    var collisionPtrs: array[4, ptr Box] = [nilPtr, nilPtr, nilPtr, nilPtr]
#
#    for mapEntity in game.map:
#        #first we figure out where the wall is relative to the player
#        var direction = DirectionE.none
#        var wallBox = addr mapEntity.collidable.box #TODO: I think it copies it, it shouldn't! 
#        if wallBox.x >= tempBox.x + tempBox.w:
#           direction = DirectionE.right
#        elif wallBox.x + wallBox.w <= tempBox.x:
#           direction = DirectionE.left
#        elif wallBox.y + wallBox.h <= tempBox.y:
#           direction = DirectionE.up
#        elif wallBox.y >= tempBox.y + tempBox.h:
#           direction = DirectionE.down
#        
#        #then if there's a collision we count it
#        #and we put the wall's ptr in the array
#        if direction != DirectionE.none and
#            wallBox.checkCollision(addr tempBox):
#            collisionPtrs[ord direction] = wallBox
#            nbCollisions[ord direction] += 1
#    
#    if wallCollisions[ord DirectionE.right] != nil and
#        ((wallCollisions[ord DirectionE.up] == nil and wallCollisions[ord DirectionE.down] == nil) or
#        nbCollisions[ord DirectionE.right] >= 2):
#        playerTempMovement.x = float (wallCollisions[ord DirectionE.right].x - playerBox.x - playerBox.w) - 1
#    if wallCollisions[ord DirectionE.left] != nil and
#        ((wallCollisions[ord DirectionE.up] == nil and wallCollisions[ord DirectionE.down] == nil) or
#        nbCollisions[ord DirectionE.left] >= 2):
#        playerTempMovement.x = float ((wallCollisions[ord DirectionE.left].x + wallCollisions[ord DirectionE.left].w) - playerBox.x) + 1
#    if wallCollisions[ord DirectionE.up] != nil:
#        playerTempMovement.y = float (wallCollisions[ord DirectionE.up].y + wallCollisions[ord DirectionE.up].h - playerBox.y) + 1
#    if wallCollisions[ord DirectionE.down] != nil:
#        playerTempMovement.y = float (wallCollisions[ord DirectionE.down].y - (playerBox.y + playerBox.h)) - 1
#
#    return (int32 tempMovement.x, int32 tempMovement.y)
#    #player.move(int32 playerTempMovement.x, int32 playerTempMovement.y)
#    echo "Should calculate collision !"

method collide*(impl: NotCollidable) =
    echo "I'm a ghost heh!"


method move*(impl: ICollidable, x, y: int32) =
    impl.box.x += x
    impl.box.y += y

proc moveTo*(impl: ICollidable, x, y: int32) =
    impl.box.x = x
    impl.box.y = y
