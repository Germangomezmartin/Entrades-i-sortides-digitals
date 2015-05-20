const int segA = 2;          // donar nom al pin 2 de l’Arduino
const int segB = 3;          // donar nom al pin 3 de l’Arduino
const int segC = 4;          // donar nom al pin 4 de l’Arduino
const int segD = 5;          // donar nom al pin 5 de l’Arduino
const int segE = 6;          // donar nom al pin 6 de l’Arduino
const int segF = 7;         // donar nom al pin 7 de l’Arduino
const int segG = 8;         // donar nom al pin 8 de l’Arduino
const int buttonPin = 12;     // donar nom al pin 12 de l’Arduino
boolean buttonEstat = HIGH;   // definir variable d'estat pel polsador

int num = 0;                 // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 2 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 4 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(buttonPin, INPUT);      // definir el pin 12 com una entrada
  
  digitalWrite(segA, LOW);     // posar a 0V el pin 2
  digitalWrite(segB, LOW);     // posar a 0V el pin 3
  digitalWrite(segC, LOW);     // posar a 0V el pin 4
  digitalWrite(segD, LOW);     // posar a 0V el pin 5
  digitalWrite(segE, LOW);     // posar a 0V el pin 6
  digitalWrite(segF, LOW);     // posar a 0V el pin 7
  digitalWrite(segG, LOW);     // posar a 0V el pin 8  
}

//********** Loop *****************************************************************
void loop()
{ 
  delay(500);    // per evitar que en una pulsació curta salti més d'un número
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == LOW)
  { 
    num = num + 1;              // incrementar el número a mostrar
    if (num == 10) num = 0;     // si s'ha superat 9 tornar a 0     
  }
  switch(num)
  {
    case 0:
      digitalWrite(segA, HIGH);   // número 0 
      digitalWrite(segB, HIGH);     
      digitalWrite(segC, HIGH);     
      digitalWrite(segD, HIGH);     
      digitalWrite(segE, HIGH); 
      digitalWrite(segF, HIGH);    
      digitalWrite(segG, LOW);    // segments ON: A, B, C, D, E i F   
      break;
    case 1:   
      digitalWrite(segA, LOW);    // número 1         
      digitalWrite(segD, LOW);     
      digitalWrite(segE, LOW);     
      digitalWrite(segF, LOW);    // segments ON: B, C     
      break;
    case 2:  
      digitalWrite(segA, HIGH);   // número 2          
      digitalWrite(segC, LOW);     
      digitalWrite(segD, HIGH);     
      digitalWrite(segE, HIGH);     
      digitalWrite(segG, HIGH);   // segments ON: A, B, D, E i G 
      break;  
    case 3:        
      digitalWrite(segC, HIGH);   // número 3          
      digitalWrite(segE, LOW);    // segments ON: A, B, C, D i G 
      break;  
    case 4:   
      digitalWrite(segA, LOW);    // número 4    
      digitalWrite(segD, LOW);     
      digitalWrite(segF, HIGH);   // segments ON: B, C, F i G  
      break;  
    case 5:        
      digitalWrite(segA, HIGH);   // número 5 
      digitalWrite(segB, LOW); 
      digitalWrite(segD, HIGH);   // segments ON: A, C, D, F i G
      break;  
    case 6:            
      digitalWrite(segA, LOW);    // número 6        
      digitalWrite(segE, HIGH);   // segments ON: C, D, E, F i G 
      break;  
    case 7:             
      digitalWrite(segA, HIGH);   // número 7
      digitalWrite(segB, HIGH);  
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);    // segments ON: A, B i C
      break;  
    case 8:          
      digitalWrite(segD, HIGH);   // número 8  
      digitalWrite(segE, HIGH); 
      digitalWrite(segF, HIGH);    
      digitalWrite(segG, HIGH);   // segments ON: A, B, C, D, E, F i G
      break;  
    case 9:            
      digitalWrite(segD, LOW);    // número 9
      digitalWrite(segE, LOW);    // segments ON: A, B, C, F i G
      break;  
  }    
}
