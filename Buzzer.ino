#include <Esplora.h>

void setup() {
}

void loop() {
  if (Esplora.readButton(SWITCH_1) == LOW) {
    Esplora.tone(500);
  }
  else {
    Esplora.noTone();
  }
}