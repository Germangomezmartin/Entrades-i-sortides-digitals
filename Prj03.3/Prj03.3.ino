const int segA = 2;          // donar nom al pin 2 de l’Arduino
const int segB = 3;          // donar nom al pin 3 de l’Arduino
const int segC = 4;          // donar nom al pin 4 de l’Arduino
const int segD = 5;          // donar nom al pin 5 de l’Arduino
const int segE = 6;          // donar nom al pin 6 de l’Arduino
const int segF = 7;          // donar nom al pin 7 de l’Arduino
const int segG = 8;          // donar nom al pin 8 de l’Arduino
int pausa = 1000;             // definir variable de temps en ms


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
  
  
}

//********** Loop *****************************************************************
void loop()
{
  
  digitalWrite(segA, LOW);     // tot parat
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // lletra G 
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, HIGH);    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segB, LOW);    // lletra E         
  digitalWrite(segC, LOW);     
  digitalWrite(segE, HIGH);             
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);   // lletra R          
  digitalWrite(segD, LOW);     
  digitalWrite(segF, LOW);     
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segC, HIGH);   // lletra M           
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);    // lletra A    
  digitalWrite(segB, HIGH);     
  digitalWrite(segF, HIGH);         
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);   // lletra N
  digitalWrite(segB, LOW); 
  digitalWrite(segD, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);     
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segC, LOW);
  digitalWrite(segE, LOW);     
  delay(pausa*2);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // lletra G 
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);  
  digitalWrite(segD, HIGH);     
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, HIGH);
  digitalWrite(segE, LOW);  
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segE, HIGH);   // lletra O 
  digitalWrite(segG, LOW);   
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número M 
  digitalWrite(segB, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);            
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // lletra E
  digitalWrite(segD, HIGH);  
  digitalWrite(segF, HIGH);
  digitalWrite(segB, LOW);              
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segB, HIGH);   // lletra Z
  digitalWrite(segF, LOW);            
  delay(pausa);               // es queda en aquest estat pausa ms
  
  }




