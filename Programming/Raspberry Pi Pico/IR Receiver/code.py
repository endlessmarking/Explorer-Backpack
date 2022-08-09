import board
import pulseio

pulses = pulseio.PulseIn(board.GP2, maxlen=200, idle_state=True)
decoder = adafruit_irremote.GenericDecode()

# did not work