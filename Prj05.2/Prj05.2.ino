const int col1 = 10;
const int col2 = 9;
const int col3 = 8;
const int col4 = 7;
const int col5 = 6;
const int col6 = 5;
const int col7 = 4;
const int col8 = 3;
const int col9 = 2;
const int niv1 = 11;
const int niv2 = 12;
const int niv3 = 13;

int pausa = 100;// velocita de moviment del cub

//********** Setup *******************************
void setup()
{
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  pinMode(niv1, OUTPUT);
  pinMode(niv2, OUTPUT);
  pinMode(niv3, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(niv1, HIGH);  
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col1, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col9, LOW); 
  digitalWrite(niv1, HIGH);
  digitalWrite (col2, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col2, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col8, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col8, LOW); 
  digitalWrite(niv1, HIGH);
  digitalWrite (col3, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col3, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col7, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col7, LOW); 
  digitalWrite(niv1, HIGH);  
  digitalWrite (col6, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col6, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col4, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col4, LOW);
  digitalWrite(niv1, HIGH); 
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col9, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col1, LOW); 
  digitalWrite(niv1, HIGH);  
  digitalWrite (col8, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col8, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col2, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col2, LOW); 
  digitalWrite(niv1, HIGH);
  digitalWrite (col7, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col7, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col3, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col3, LOW); 
  digitalWrite(niv1, HIGH);
  digitalWrite (col4, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite (col4, LOW); 
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite (col5, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col6, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite (col6, LOW); 
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite (col1, LOW);
  digitalWrite (col2, HIGH);
  delay(pausa);
  digitalWrite (col2, LOW);
  digitalWrite (col3, HIGH);
  delay(pausa);
  digitalWrite (col3, LOW);
  digitalWrite (col6, HIGH);
  delay(pausa);
  digitalWrite (col6, LOW);
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite (col9, LOW);
  digitalWrite (col8, HIGH);
  delay(pausa);
  digitalWrite (col8, LOW);
  digitalWrite (col7, HIGH);
  delay(pausa);
  digitalWrite (col7, LOW);
  digitalWrite (col4, HIGH);
  delay(pausa);
  digitalWrite (col4, LOW);
  digitalWrite(niv2, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite(niv2, HIGH);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite(niv2, HIGH);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite(niv2, HIGH);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv3, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv2, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv1, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv2, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv3, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv1, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv2, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  delay(pausa);
  digitalWrite(col4, LOW);
  delay(pausa);
  digitalWrite(col7, LOW);
  delay(pausa);
  digitalWrite(col2, LOW);
  delay(pausa);
  digitalWrite(col5, LOW);
  delay(pausa);
  digitalWrite(col8, LOW);
  delay(pausa);
  digitalWrite(col3, LOW);
  delay(pausa);
  digitalWrite(col6, LOW);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv3, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col2, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col8, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col3, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col7, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col6, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col4, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH); 
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col8, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col2, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col7, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col3, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col4, HIGH);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col6, HIGH);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col1, LOW);
  delay(pausa);
  digitalWrite(niv2, HIGH);
  digitalWrite (col5, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col9, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col2, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col8, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col3, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col7, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col6, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col4, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH); 
  digitalWrite (col9, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col1, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite (col8, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col2, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col7, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col3, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);
  digitalWrite (col4, LOW);
  delay(pausa);
  digitalWrite(niv3, HIGH);  
  digitalWrite (col6, LOW);
  delay(pausa);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, LOW);
  delay(pausa);
  digitalWrite(niv1, HIGH);  
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, HIGH);  
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, HIGH);  
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite (col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(niv3, LOW);
 
 
 
}

//********** Funcions *************************************************************

