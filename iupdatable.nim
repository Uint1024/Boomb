import sdl2
import basic2d
import input
import icollidable, ivisible

type
    IUpdatable* = ref object of RootObj
    UpdatablePlayer* = ref object of IUpdatable
        playerTempMovement: Tvector2d
        

    UpdatableBomb* = ref object of IUpdatable

proc newUpdatablePlayer*(): UpdatablePlayer =
    result = UpdatablePlayer()

proc newUpdatableBomb*(): UpdatableBomb =
    result = UpdatableBomb()

method update*(obj: IUpdatable, collisionImpl: ICollidable,
    visibleImpl: IVisible) =
    echo "shouldn't be called"

#must have collision and visible as parameters to be able to move them??
method update*(obj: UpdatablePlayer, collisionImpl: ICollidable,
    visibleImpl: IVisible) =
    collisionImpl.move(int32 obj.playerTempMovement.x, 
        int32 obj.playerTempMovement.y)
    visibleImpl.move(int32 obj.playerTempMovement.x, 
        int32 obj.playerTempMovement.y)
    #do input stuff here
    obj.playerTempMovement = vector2d(0.0,0.0)
    if keysPressed[ord SDL_SCANCODE_D]: 
        obj.playerTempMovement.x += 5 
    if keysPressed[ord SDL_SCANCODE_A]:
        obj.playerTempMovement.x -= 5
    if keysPressed[ord SDL_SCANCODE_S]:
        obj.playerTempMovement.y += 5 
    if keysPressed[ord SDL_SCANCODE_W]:
        obj.playerTempMovement.y -= 5 

    #var movement = collisionImpl.collide(playerTempMovement, map)


method update*(obj: UpdatableBomb) =
    #do bomb stuff here
    discard
