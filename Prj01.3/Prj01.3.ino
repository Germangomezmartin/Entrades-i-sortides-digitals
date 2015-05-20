const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
int pausa = 70;

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
    
  digitalWrite (led3, HIGH);    
  delay(pausa);  
  
  digitalWrite (led4, HIGH);      
  delay(pausa);  
 
  digitalWrite (led5, HIGH); 
  digitalWrite (led2, LOW);  
  delay(pausa); 
   
  digitalWrite (led6, HIGH);    
  digitalWrite (led3, LOW);  
  delay(pausa);  
 
  digitalWrite (led7, HIGH); 
  digitalWrite (led4, LOW);  
  delay(pausa);   
  
  digitalWrite (led8, HIGH);  
  digitalWrite (led5, LOW); 
  delay(pausa);   

  digitalWrite (led9, HIGH);  
  digitalWrite (led6, LOW); 
  delay(pausa); 
 
  digitalWrite (led7, LOW); 
  delay(pausa);
  
  digitalWrite (led8, LOW); 
  delay(pausa);

  digitalWrite (led8, HIGH); 
  delay(pausa);

  digitalWrite (led7, HIGH);    
   delay(pausa);
   
  digitalWrite (led9, LOW);    
  digitalWrite (led6, HIGH);    
   delay(pausa);
   
  digitalWrite (led8, LOW);    
  digitalWrite (led5, HIGH);    
   delay(pausa);
   
  digitalWrite (led7, LOW);    
  digitalWrite (led4, HIGH);    
   delay(pausa); 
  
  digitalWrite (led6, LOW);    
  digitalWrite (led3, HIGH);    
  delay(pausa);
  
  digitalWrite (led5, LOW);    
  digitalWrite (led2, HIGH);    
  delay(pausa);
  
  digitalWrite (led4, LOW);      
  delay(pausa);
  
  digitalWrite (led3, LOW);        
  delay(pausa); 
  
  }

