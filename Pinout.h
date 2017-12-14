Connection Diagram

Adafruit I2S DAC   ESP8266         Node Mcu         Description

LRC      GPIO2/TX1 LRCK         D4     (and led)    Left/Right audio
BCLK     GPIO15 BCLK            D8         I2S Clock
DIN      GPIO03/RX0 DATA        D9/RX         I2S Data
GAIN     not connected                     9 dB gain
SD       not connected                     Stereo average
GND      GND Ground
Vin      BAT                               3.7V battery power
If you need more volume you could use a booster to generate 5V from the battery and drive the DAC board Vin with 5V. Also experiment with the GAIN pin.


