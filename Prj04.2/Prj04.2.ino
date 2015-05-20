const int leds4 = 2;          // donar nom al pin 2 de l’Arduino
const int leds3 = 3;          // donar nom al pin 3 de l’Arduino
const int leds2 = 4;          // donar nom al pin 4 de l’Arduino
const int led1 = 5;           // donar nom al pin 5 de l’Arduino
const int buttonPin = 12;      // donar nom al pin 12 de l’Arduino
boolean buttonEstat = HIGH;    // definir variable d'estat pel polsador
int num = 1;                  // definir variable per número a mostrar

//********** Setup ****************************************************************
void setup()
{
  pinMode(leds4, OUTPUT);     // definir el pin 2 com una sortida
  pinMode(leds3, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(leds2, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(led1, OUTPUT);      // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT);  // definir el pin 12 com una entrada
  
  digitalWrite(leds4, LOW);   // posar a 0V el pin 2
  digitalWrite(leds3, LOW);   // posar a 0V el pin 3
  digitalWrite(leds2, LOW);   // posar a 0V el pin 4
  digitalWrite(led1, LOW);    // posar a 0V el pin 5
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == LOW)
  { 
    num = random(1,7);
    digitalWrite(leds2,LOW);
    digitalWrite(leds3,LOW);
    digitalWrite(leds4,LOW);
    digitalWrite(led1,LOW);
  }
  switch(num)
  {
    case 1:
      digitalWrite(led1, HIGH);    // mostrar el 1
    case 2:      
      digitalWrite(leds2, HIGH);   // mostrar el 2  
      break;
    case 3:  
      digitalWrite(led1, HIGH);    // mostrar el 3
      digitalWrite(leds3, HIGH);  
      break;
    case 4:   
      digitalWrite(leds2, HIGH);   // mostrar el 4
      digitalWrite(leds3, HIGH); 
      break;
    case 5:
      digitalWrite(leds2, HIGH);   // mostrar el 5
      digitalWrite(leds3, HIGH);
      digitalWrite(led1, HIGH);    
      break;
    case 6:      
      digitalWrite(leds2, HIGH);   // mostrar el 6
      digitalWrite(leds3, HIGH);
      digitalWrite(leds4, HIGH);
      break;  
  }
}
