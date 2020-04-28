# STM32f103-RFID-MFRC522

1.Implement function:
>>>STM32_SPI controller communicates with RC522 to realize RFID read and write function;
>>>Each time you swipe, the LED flashes once and the buzzer sounds once.Read the unique identification code in the RFID card and use the serial port to display;
>>>Write a value of 10 to the space inside the card.  Each time the card is swiped, the value is read from the card, the value is decremented by 1, and then written back to the card.  When reduced to 0, the value is increased to 10.  The serial port shows the process.

2.Wiring:
*1--SDA <----->PA4
*2--SCK <----->PA5
*3--MOSI<----->PA7
*4--MISO<----->PA6
*5--NUll
*6--GND <----->GND
*7--RST <----->PB0
*8--VCC <----->VCC(3.3v)
