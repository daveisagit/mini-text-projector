#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Declare LCD object for software SPI
// Adafruit_PCD8544(CLK,DIN,D/C,CE,RST);
Adafruit_PCD8544 display = Adafruit_PCD8544(3, 4, 5, 6, 7);

void setup()   {
  Serial.begin(9600);

  //Initialize Display
  display.begin();

  // you can change the contrast around to adapt the display for the best viewing!
  display.setContrast(57);

  // Clear the buffer.
  display.clearDisplay();

  // Draw Rectangle
  display.drawRect(0, 0, 60, 40, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Filled Rectangle
  display.fillRect(0, 0, 60, 40, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Round Rectangle
  display.drawRoundRect(0, 0, 60, 40, 8, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Filled Round Rectangle
  display.fillRoundRect(0, 0, 60, 40, 8, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Circle
  display.drawCircle(20, 20, 20, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();

  //Draw Filled Circle
  display.fillCircle(20, 20, 20, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Triangle
  display.drawTriangle(20, 0, 0, 40, 40, 40, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();


  //Draw Filled Triangle
  display.fillTriangle(20, 0, 0, 40, 40, 40, BLACK);
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {}
