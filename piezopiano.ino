
const int buttonPin1 = 1;
const int buttonPin2 = 2;
const int buttonPin3 = 3;
const int buttonPin4 = 4;
const int buttonPin5 = 5;
const int buttonPin6 = 6;
void setup() {

     
  pinMode(buttonPin1, INPUT); 
  pinMode(buttonPin2, INPUT);  
  pinMode(buttonPin3, INPUT); 
  pinMode(buttonPin4, INPUT);  
  pinMode(buttonPin5, INPUT);  
  pinMode(buttonPin6, INPUT);     
}
void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
   if (buttonState1 == LOW) { 
    tone(3, NOTE_C1);
   } 
   if (buttonState2 == LOW) { 
    tone(3, NOTE_D1);
   } 
   if (buttonState3 == LOW) { 
    tone(3, NOTE_E1);
   }  
   if (buttonState4 == LOW) { 
    tone(3, NOTE_F1);
   }
   if (buttonState5 == LOW) { 
    tone(3, NOTE_G1);
   }  
   if (buttonState6 == LOW) { 
    tone(3, NOTE_A1);
   }
}
