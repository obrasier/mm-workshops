#include <Esplora.h>

void setup() {
}

void loop() {
  if (Esplora.readButton(SWITCH_1) == LOW) {
    Esplora.tone(500); // Make a tone of 500 Hz if SW_1 is pressed
  }
  else {
    Esplora.noTone(); // Turn tone off when not pressed
  }
}