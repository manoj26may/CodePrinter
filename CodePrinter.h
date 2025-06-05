#ifndef CODEPRINTER_H
#define CODEPRINTER_H

#include <Arduino.h>

class CodePrinter {
  public:
    static void printBlinkExample();
    static void printDHTExample();
    static void printOLEDExample();
    static void printButtonLEDExample();
    static void printSoilMoistureExample();
    static void printUltrasonicExample();
    static void printDHTThingSpeakUpload();
    static void printThingSpeakReader();
};

#endif
