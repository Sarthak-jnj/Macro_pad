import serial as srl
import time

PORT = 'COM13'
ser = srl.Serial(PORT, 115200)
print(ser)

time.sleep(2)

while True:
    data = ser.readline()
    print(data.decode('utf-8').strip())
