/* Include the library */
#include <Wire.h>  
#include "SSD1306Wire.h" 

/* Initialize the OLED */
SSD1306Wire display(0x3c, 5, 4);

/* setup function */
void setup() 
{
  display.init();
}

/* loop function */
void loop() 
{
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.setFont(ArialMT_Plain_24);
  display.drawString(70, 18, "A");

  display.display();
}
