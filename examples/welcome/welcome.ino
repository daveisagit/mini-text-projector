#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Declare LCD object for software SPI
// Adafruit_PCD8544(CLK,DIN,D/C,CE,RST);
Adafruit_PCD8544 display = Adafruit_PCD8544(3, 4, 5, 6, 7);

int rotatetext = 1;

void setup()   {
  Serial.begin(9600);

  //Initialize Display
  display.begin();

  // you can change the contrast around to adapt the display for the best viewing!
  display.setContrast(57);

  // Clear the buffer.
  display.clearDisplay();
  
// Scaling Font Size
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.setTextSize(2);
  display.println("HELLO  THERE!");
  display.display();
  delay(2000);
  display.clearDisplay();

  // Display Text
  display.setTextSize(2);
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.println("I am   your...");
  display.display();
  delay(3000);
  display.clearDisplay();


  // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(WHITE, BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();

   // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();

 // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(WHITE, BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();

   // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();

  // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(WHITE, BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();

   // Display Inverted Text
  display.setTextSize(2);
  display.setTextColor(BLACK); // 'inverted' text
  display.setCursor(0,0);
  display.println("MINI   PROJECTOR");
  display.display();
  delay(400);
  display.clearDisplay();


  // Text Rotation
  while(1)
  {
  display.clearDisplay();
  display.setRotation(rotatetext);  // rotate 90 degrees counter clockwise, can also use values of 2 and 3 to go further.
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.println("What message do you want me to project?");
  display.display();
  delay(2000);
  display.clearDisplay();
  rotatetext++;
  }
}

void loop() {}
