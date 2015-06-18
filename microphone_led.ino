#include <Esplora.h>

void setup() {
  // initialize the serial communication:
}

void loop() {
  // read micrphone into variable
  int mic = Esplora.readMicrophone();

  Esplora.writeRed(mic);

  // add a delay to keep the LED from flickering:
  delay(10);
}