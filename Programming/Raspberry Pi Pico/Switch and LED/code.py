import time
import board
import digitalio

led = digitalio.DigitalInOut(board.GP15)
led.direction = digitalio.Direction.OUTPUT

switch = digitalio.DigitalInOut(board.GP13)
switch.switch_to_input(pull=digitalio.Pull.UP)

while True:
    print(switch.value)
    led.value = switch.value
    time.sleep(0.5)