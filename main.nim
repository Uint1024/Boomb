#BoomMan
#main.nim
import math
import sdl2
import game

discard sdl2.init(INIT_EVERYTHING)

math.randomize()

initGame()

while game.runGame:
    game.update()
    game.render()

