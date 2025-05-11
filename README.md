# OLED Alphabet Display – ESP32

This project demonstrates a basic example of text rendering using the onboard **SSD1306 OLED** display on the Hailege ESP32 development board.
It prints the English alphabet (`A`) using the `SSD1306Wire` library and refreshes the display every second.

For more details on how the OLED is interfaced and configured, refer to the [OLED Wiki Page](https://github.com/DevaharshaM/EspProjects/wiki/Interfacing-SSD1306-OLED-Display).

---

## How to Use

1. Download or clone this branch
2. Install the [ThingPulse SSD1306 OLED Library](https://github.com/ThingPulse/esp8266-oled-ssd1306) in Arduino IDE  
   (`Sketch → Include Library → Add .ZIP Library...`)
3. Open the `OLED_Alphabet.ino` file
4. Select the correct ESP32 board and port
5. Upload the sketch and observe the alphabet appear on the OLED
