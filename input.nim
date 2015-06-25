import basic2d
import sdl2
import enums

var
    e = sdl2.defaultEvent
    mouseX*, mouseY*: int32
    keysPressed*: array[0..ord SDL_NUM_SCANCODES, bool]
    playerTempMovement: TVector2d 
    collisionDirections: array[0..3, bool] = [false, false, false, false]

import entity, box
proc pollEvents*(runGame: var bool) =
    while sdl2.pollEvent(e):
        case e.kind:
        of QuitEvent:
            runGame = false
            break
        of KeyDown:
            var keyEvent = EvKeyboard(e)
            keysPressed[ord keyEvent.keysym.scancode] = true
        of KeyUp:
            var keyEvent = EvKeyboard(e)
            keysPressed[ord keyEvent.keysym.scancode] = false

        else:
            discard

    discard sdl2.getMouseState(mouseX, mouseY)
