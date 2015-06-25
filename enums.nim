type
    SpriteE* {.pure.} = enum
        player = 0,
        bullet,
        wall,
        bomb,
        explosion,
        numOfTextures
    ColorE* {.pure.} = enum
        black = 0, grey, white, red
    DirectionE* {.pure.} = enum
        right = 0, down, left, up, none
