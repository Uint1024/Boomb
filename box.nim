type
    Box* = tuple 
        x, y, w, h: int32

proc checkCollision*(a, b: ptr Box): bool =
    if a.x + a.w < b.x or 
        a.x > b.x + b.w or
        a.y + a.h < b.y or
        a.y > b.y + b.h:
        return false

    return true

