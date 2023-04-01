// C++ code
//
#define n0 0
#define n1 1
#define n2 2
#define n3 3
#define trava 4
#define d0 9
#define d1 10
#define d2 11
#define d3 12
#define botao 5



//uint_8t dnum[4]={0};
int val=0;

void setup()
{
//  pinMode(LED_BUILTIN, OUTPUT);
  for(int i=0; i<5;i++)
  pinMode(i, OUTPUT);
  
  for(int i=9; i<13;i++){
  pinMode(i, OUTPUT);
  digitalWrite(i,LOW);
  }
  
  pinMode(botao,INPUT);
  digitalWrite(trava, LOW);

}

void loop()
{
  
 if(digitalRead(botao) == HIGH){
   val++;
     if(val>9)
      val=0;
   
  delay(300); // Wait for 300 millisecond(s)
 }
  disp_num();
//  delay(1000);

}

void disp_num(){
  switch (val){
    case 1: 
    um();
    break;
    case 2: 
    dois();
    break;
    case 3: 
    tres();
    break;
    case 4: 
    quatro();
    break;
    case 5: 
    cinco();
    break;
    case 6: 
    seis();
    break;
    case 7: 
    sete();
    break;
    case 8: 
    oito();
    break;
    case 9: 
    nove();
    break;
    case 0: 
    zero();
    break;
    
  }
}

void um(){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void dois(){
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void tres(){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void quatro(){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void cinco(){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void seis(){
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void sete(){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void oito(){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void nove(){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void zero(){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
