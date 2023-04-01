// #include <RTClib.h>

#include "irrigacao_libs.h"


//Botões e LEDs usados 
#define led1 15 //A1
#define led2 16 //A2
#define botao1 17 //A3
#define botao2 18 //A4
#define rele   19 //A5


//Controle dos disp7s
#define b0 0
#define b1 1
#define b2 2
#define b3 3
#define trava 4
#define d0 9
#define d1 10
#define d2 11
#define d3 12
#define botao 5

DISPLAY7s dt;


byte val=0;
// o RTC usa os D{5,6,7}
// Os display7s os D{0-4,8-14}
// Isso usa todos os pinos daqui, Se eu quiser ter menos pinos posso abrir mão
// dos pontos no Display7s tendo 4 livres



void setup() {
  // put your setup code here, to run once:
  // checar RTC
  // setup e check dos Displays e botões
    for(int i=0; i<5;i++)
      pinMode(i, OUTPUT);
  
  for(int i=9; i<13;i++){
  pinMode(i, OUTPUT);
  digitalWrite(i,LOW);
  }
  
//  pinMode(botao,INPUT);
  digitalWrite(trava, LOW);
  // piscar os Leds
  // checar torneira

}

void loop() {
  // put your main code here, to run repeatedly:
  //função debug pra teste, acrescenta +1 em val se apertar botão
//  if(digitalRead(botao) == HIGH){
//   val++;
//     if(val>9)
//      val=0;
//      
//  delay(300); // Wait for 300 millisecond(s)
// }

dt.disp_num(b0,b1,b2,b3,val); // exibe numero de val no display

}
