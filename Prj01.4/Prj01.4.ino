const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
int pausa = 500;

void setup()
{
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}
void loop()
{
    
  digitalWrite (led2, HIGH);      
  delay(pausa);
  
  digitalWrite (led2, LOW);  
  digitalWrite (led3, HIGH);    
  delay(pausa);  
  
  digitalWrite (led2, HIGH);      
  delay(pausa); 
  
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, HIGH);  
  delay(pausa); 
  
  digitalWrite (led2, HIGH); 
  digitalWrite (led4, HIGH);      
  delay(pausa);  
 
  digitalWrite (led3, HIGH);   
  delay(pausa);   
  
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);  
  digitalWrite (led4, LOW); 
  digitalWrite (led5, HIGH);
  delay(pausa);   

  digitalWrite (led2, HIGH);  
  delay(pausa); 
 
  digitalWrite (led2, LOW);
  digitalWrite (led3, HIGH); 
  delay(pausa);
  
  digitalWrite (led2, HIGH); 
  delay(pausa);

  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, HIGH); 
  delay(pausa);

  digitalWrite (led2, HIGH);    
   delay(pausa);
   
  digitalWrite (led2, LOW);    
  digitalWrite (led3, HIGH);    
  delay(pausa);
      
  digitalWrite (led2, HIGH);    
  delay(pausa);
   
  digitalWrite (led2, LOW);    
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  digitalWrite (led5, LOW);
  delay(pausa); 
  
  }

