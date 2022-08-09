import time
import board
import analogio

light = analogio.AnalogIn(board.GP26)

while True:
    print(light.value)
    time.sleep(2)