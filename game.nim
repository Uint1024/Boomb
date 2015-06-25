#game.nim
import sdl2
import engine, enums, input
import math, strutils
import entity, box, bomb, player, wall

var
    runGame* = true
    bombs: seq[Bomb]
    score: int
    player1: Player
    map*: seq[Wall]
    mapString: string 
    tileSize = 40'i32

proc update*() =
    player1.update()
    #player1.collide()
    pollEvents(runGame)

proc render*() =
    engine.clear()
    for i in map:
        i.draw()

    for i in bombs:
        i.draw()

    player1.draw()
    renderText("Score: " & $score, 5'i32, 5'i32, ColorE.white)
    engine.present()

proc loadLevel(name: string) =
    mapString = readFile("maps/" & name & ".map")
    var x, y = 0'i32
    for character in mapString:
        echo($x)
        if character == '1':
            map.add(newWall(x*tileSize,y*tileSize))
            x += 1
        elif character == 'P':
            player1 = newPlayer(x*tileSize,y*tileSize)
            x += 1
        elif character == '0':
            x += 1
        elif character =='\x0D':
            y += 1
            x = 0

proc createBomb*(x, y: int32) =
    bombs.add(newBomb(x, y))

proc initGame*() =
    initEngine()
    bombs = @[]
    map = @[]
    loadLevel("level1")
    createBomb(50,50)

proc wtf*() =
    echo "wtf"

proc findCollisions*(collideBox: var Box, nbCollisions: var array[4,int], collisionPtrs: var array[4, ptr Box]) =
    discard
