# CircuitPython I2C Device Address Scan
import time
import board
import busio
import digitalio
import adafruit_lis3dh

# (SCL, SDA)
i2c = busio.I2C(board.GP17, board.GP16)
lis3dh = adafruit_lis3dh.LIS3DH_I2C(i2c, address=0x19)

#int1 = digitalio.DigitalInOut(board.GP18)  # Set this to the correct
#lis3dh = adafruit_lis3dh.LIS3DH_I2C(i2c, int1=int1)

lis3dh.range = adafruit_lis3dh.RANGE_2_G

while True:
    # Read accelerometer values (in m / s ^ 2).  Returns a 3-tuple of x, y,
    # z axis values.  Divide them by 9.806 to convert to Gs.
    x, y, z = [
        value / adafruit_lis3dh.STANDARD_GRAVITY for value in lis3dh.acceleration
    ]
    print("x = %0.3f G, y = %0.3f G, z = %0.3f G" % (x, y, z))
    # Small delay to keep things responsive but give time for interrupt processing.
    time.sleep(0.1)
