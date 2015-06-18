#include <Esplora.h>


void setup() {
}

void loop() {
  Esplora.writeRGB(0, 0, 255);
  delay(Esplora.readSlider());
  Esplora.writeRGB(0, 0, 0);
  delay(Esplora.readSlider());
}
