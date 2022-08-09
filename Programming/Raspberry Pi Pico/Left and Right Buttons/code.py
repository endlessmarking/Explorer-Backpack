import time
import board
import digitalio

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

leftButton = digitalio.DigitalInOut(board.GP13)
leftButton.switch_to_input(pull=digitalio.Pull.DOWN)

rightButton = digitalio.DigitalInOut(board.GP12)
rightButton.switch_to_input(pull=digitalio.Pull.DOWN)

while True:
    if leftButton.value:
        print("Left button pressed")
        led.value = True
    if rightButton.value:
        print("Right button pressed")
        led.value = True
    time.sleep(0.1)
    led.value = False
