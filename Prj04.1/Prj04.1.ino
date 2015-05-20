const int leds4 = 3;          // donar nom al pin 3 de l’Arduino
const int leds3 = 2;          // donar nom al pin 2 de l’Arduino
const int leds2 = 4;          // donar nom al pin 4 de l’Arduino
const int led1 = 5;           // donar nom al pin 5 de l’Arduino

int pausa = 2000;              // definir variable de pausa ms entre números

//********** Setup ****************************************************************
void setup()
{
  pinMode(leds4, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(leds3, OUTPUT);     // definir el pin 2 com una sortida
  pinMode(leds2, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(led1, OUTPUT);      // definir el pin 5 com una sortida
  
  digitalWrite(leds4, LOW);   // posar a 0V el pin 3
  digitalWrite(leds3, LOW);   // posar a 0V el pin 2
  digitalWrite(leds2, LOW);   // posar a 0V el pin 4
  digitalWrite(led1, HIGH);   // posar a 5V el pin 5
  
  delay(pausa);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led1, LOW);    // mostrar el 2
  digitalWrite(leds2, HIGH);  
  delay(pausa);
  
  digitalWrite(leds2, LOW);    // mostrar el 3
  digitalWrite(led1, HIGH); 
  digitalWrite(leds3, HIGH);  
  delay(pausa);
  
  digitalWrite(led1, LOW);    // mostrar el 4
  digitalWrite(leds2, HIGH); 
  delay(pausa);
  
  digitalWrite(led1, HIGH);   // mostrar el 5  
  delay(pausa);
  
  digitalWrite(led1, LOW);    // mostrar el 6
  digitalWrite(leds4, HIGH);
  delay(pausa);
  
  digitalWrite(leds4, LOW);   // mostrar el 1
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, HIGH);   
  delay(pausa);
}
