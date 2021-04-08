#include "pitches.h"
int melody[]={NOTE_G4, NOTE_G4, NOTE_A5, NOTE_A5, 
NOTE_G4, NOTE_G4, NOTE_E4, 
NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, 0, 
NOTE_G4, NOTE_G4, NOTE_A5, NOTE_A5, 
NOTE_G4, NOTE_G4, NOTE_E4, 
NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4,0};
int noteDurations[]={1,1,1,1,1,1,2,
1,1,1,1,3,
1,1,1,1,1,1,2,
1,1,1,1,3,1};
void setup() {
  // put your setup code here, to run once:
  for(int thisNote=0; thisNote<26; thisNote++){
    int noteDuration=250*noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes=noteDuration*1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
