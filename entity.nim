import sdl2
import ivisible, icollidable, iupdatable

type
    Entity* = ref EntityObj
    EntityObj* = object of RootObj
        visible*: IVisible
        collidable*: ICollidable
        updatable*: IUpdatable


method move*(obj: Entity, x, y: int32) =
    obj.visible.move(x, y)
    obj.collidable.move(x, y)

method moveTo*(obj: Entity, x, y: int32) =
    obj.visible.moveTo(x, y)
    obj.collidable.moveTo(x, y)

proc draw*(obj: Entity) =
    obj.visible.draw()

proc collide*(obj: Entity) =
    obj.collidable.collide()

proc update*(obj: Entity) =
    iupdatable.update(obj.updatable, obj.collidable, obj.visible)
