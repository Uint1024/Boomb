import sdl2, sdl2/image, sdl2/ttf
import enums, sprite


var
    screenWidth: int32 = 640
    screenHeight: int32 = 480 
    window: WindowPtr
    renderer: RendererPtr
    spriteMap: TexturePtr
    spritePositions: seq[Rect]
    font: FontPtr
    text: TexturePtr
    fontColor:seq[sdl2.Color]
    

proc initEngine*() =
    window = sdl2.createWindow("Nim tentative de jeu", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        screenWidth, screenHeight, SDL_WINDOW_SHOWN)
    renderer = sdl2.createRenderer(window, -1, 
        Renderer_Accelerated or Renderer_PresentVsync)
    spriteMap = image.loadTexture(renderer, "test.png")
    spritePositions = newSeq[Rect](ord SpriteE.numOfTextures)

    var err = image.init()
    if err == 0:
        echo getError()

    var sdlerr = ttfinit()
    if sdlerr == SDLError:
        echo getError()

    font = openFont("Hanken-Book.ttf", 20)
    if font == nil:
        echo "Error, can't open font in engine.nim"

    fontColor = @[] 
    fontColor.add((0'u8,0'u8,0'u8,255'u8))
    fontColor.add((122'u8,122'u8,122'u8,255'u8))
    fontColor.add((255'u8,255'u8,255'u8,255'u8))

    spritePositions[ord SpriteE.player] = (0'i32,0'i32,128'i32,128'i32)
    spritePositions[ord SpriteE.bullet] = (128'i32,0'i32,128'i32,128'i32)
    spritePositions[ord SpriteE.wall] = (128*2'i32,0'i32,128'i32,128'i32)
    spritePositions[ord SpriteE.bomb] = (128*3'i32,0'i32,128'i32,128'i32)

proc drawSprite*(sprite: Sprite) =
    renderer.copy(spriteMap, addr spritePositions[ord sprite.getSpriteType], sprite.getBox())

proc getRenderer*(): RendererPtr {.inline.} =
    renderer

proc getWindow*(): WindowPtr  {.inline.}  =
    window

proc getSpriteMap*(): TexturePtr {.inline.} =
    spriteMap

proc clear*() =
    renderer.setDrawColor(30,0,0,255)
    renderer.clear()

proc present*() =
    renderer.present()

proc getScreenWidth*(): int =
    screenWidth

proc getScreenHeight*(): int =
    screenHeight

proc renderText*(textString: cstring, x, y: int32, color: ColorE) = 
    var 
        textSurface =  renderTextSolid(font, textString, fontColor[ord color])
        textTexture = renderer.createTextureFromSurface(textSurface)
        textSizeX, textSizeY: int32 

    queryTexture(textTexture, nil, nil, addr textSizeX, addr textSizeY)
    var textPosition: Rect = (x, y, textSizeX, textSizeY)

    copy(renderer, textTexture, nil, addr textPosition)

    #textSurface and textTexture are pointers, not refs!
    #Pointers aren't managed by the garbage collector so memory must be freed manually!
    #Use SDL's destructor function "destroy"
    destroy(textSurface)
    destroy(textTexture)
