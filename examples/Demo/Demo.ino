#include <CodePrinter.h>

void setup() {
  Serial.begin(9600);
  delay(1000);

  CodePrinter::Blink();
  CodePrinter::DHT();
  CodePrinter::OLED();
  CodePrinter::PushButton();
  CodePrinter::SoilMoisture();
  CodePrinter::Ultrasonic();
  CodePrinter::ThingSpeakUpload();
  CodePrinter::ThingSpeakRead();
}

void loop() {}
