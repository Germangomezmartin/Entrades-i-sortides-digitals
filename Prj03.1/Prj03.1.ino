const int segA = 5;          // donar nom al pin 5 de l’Arduino
const int segB = 6;          // donar nom al pin 6 de l’Arduino
const int segC = 7;          // donar nom al pin 7 de l’Arduino
const int segD = 8;          // donar nom al pin 8 de l’Arduino
const int segE = 9;          // donar nom al pin 9 de l’Arduino
const int segF = 10;         // donar nom al pin 10 de l’Arduino
const int segG = 11;         // donar nom al pin 11 de l’Arduino
int pausa = 800;             // definir variable de temps en ms


//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
}
void loop()
{
  digitalWrite(segA, LOW);     // tot parat
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(pausa);                 // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);     // número 0
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);        
  delay(pausa);                // es queda en aquest estat pausa ms
 
  digitalWrite(segA, LOW);     // número 0 tot parat
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  delay(pausa);                // es queda en aquest estat pausa ms
 
 
  digitalWrite(segB, HIGH);    // número 1   
  digitalWrite(segC, HIGH);        
  delay(pausa);                // es queda en aquest estat pausa ms
  
  digitalWrite(segB, LOW);     // número 1 tot parat
  digitalWrite(segC, LOW);
  delay(pausa);                // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);    // número 2  
  digitalWrite(segB, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segG, HIGH);        
  delay(pausa);                // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);     // número 2 tot parat         
  digitalWrite(segB, LOW);
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);
  digitalWrite(segG, LOW);     
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 3  
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH); 
  digitalWrite(segG, HIGH);        
  delay(pausa);              // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);   // número 3 tot parat        
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);     
  digitalWrite(segG, LOW);       
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segB, HIGH);   // número 4          
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segB, LOW);    // número 4 tot parat    
  digitalWrite(segC, LOW);
  digitalWrite(segF, LOW);    
  digitalWrite(segG, LOW); 
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 5  
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segF, HIGH); 
  digitalWrite(segG, HIGH);        
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 5 tot parat        
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segG, LOW);     
  digitalWrite(segG, LOW);       
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 6  
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);      
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 6 tot parat
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);       
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 7
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);          
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 7 tot parat
  digitalWrite(segB, LOW);  
  digitalWrite(segC, LOW);    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 8
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);  
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 8 tot parat
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  delay(pausa);               // es queda en aquest estat pausa ms
  
  
  digitalWrite(segA, HIGH);   // número 9
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);  
  digitalWrite(segD, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 9 tot parat
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);  
  digitalWrite(segD, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);             
  delay(pausa);               // es queda en aquest estat pausa ms
  
 
}

