/* This shows how to display the CCS811 & the Battery Status readings on an I2C SSD1306 OLED. 
 * (Hardware Used: Adafruit Feather HUZZAH ESP8266 with Battery Divider Circuit, CCS811 & SSD1306 OLED)
 */
 
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>

#include <Adafruit_SSD1306.h>
#include "Adafruit_CCS811.h"

Adafruit_CCS811 ccs;
Adafruit_SSD1306 display = Adafruit_SSD1306();

void setup() {  
  Serial.begin(115200);
  
  // voltage monitor
  pinMode(A0, INPUT);

  if(!ccs.begin()){
    Serial.println("Failed to start sensor! Please check your wiring.");
    while(1);
  }
  
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)

  // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.display();
  delay(500);

  // Clear the buffer.
  display.clearDisplay();
  display.display();

  //calibrate temperature sensor
  while(!ccs.available());
  float temp = ccs.calculateTemperature();
  ccs.setTempOffset(temp - 25.0);
  
  Serial.println("Air Quality\n");

  // text display tests
  // display.setTextSize(1);
  // display.setTextColor(WHITE);
}


void loop() {

  // voltage stuff
  unsigned a0 = analogRead(A0);
  float v = (float)a0 * 5.54 / 1000.0;

  display.setCursor(0,0);
  if(ccs.available()){
    display.clearDisplay();

    display.setTextSize(1);
    display.setTextColor(BLACK, WHITE);
    display.setCursor(0,0);  
    display.println("  Air Quality  \n");
    // text display size
    display.setTextSize(1);
    display.setTextColor(WHITE);
    
    float temp = ccs.calculateTemperature();
    if(!ccs.readData()){
      display.print("eCO2: ");
      Serial.print("eCO2: ");
      float eCO2 = ccs.geteCO2();
      display.print(eCO2);
      Serial.print(eCO2);
      display.print(" ppm\nTVOC: ");
      Serial.print(" ppm  TVOC: ");      
      float TVOC = ccs.getTVOC();
      display.print(TVOC);
      Serial.print(TVOC);
      Serial.print(" ppb  Temp:");
      display.print(" ppb\nTemp: ");
      Serial.print(temp);
      display.print(temp);
  	  display.print(" C\nBatt: ");
  	  Serial.print("°C  Batt: ");
      display.print(v);
  	  Serial.print(v);
      display.println(" V");
  	  Serial.print(" V");
  	  Serial.println(" ");
      display.display();
    }
    else{
      Serial.println("ERROR!");
      while(1);
    }
  }
  delay(10000);
}

