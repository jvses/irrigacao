#include "irrigacao_libs.h"


//void DISPLAY7s::setup_displays(){
//    for(int i=0; i<5;i++)
//      pinMode(i, OUTPUT);
//}


void DISPLAY7s::um(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::dois(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::tres(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::quatro(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::cinco(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::seis(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::sete(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::oito(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void DISPLAY7s::nove(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void DISPLAY7s::zero(byte n0, byte n1, byte n2,byte n3){
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::disp_num(byte n0, byte n1, byte n2,byte n3,byte var_check){
  
  switch (var_check){
    case 1: 
    um(n0,n1,n2,n3);
    break;
    case 2: 
    dois(n0,n1,n2,n3);
    break;
    case 3: 
    tres(n0,n1,n2,n3);
    break;
    case 4: 
    quatro(n0,n1,n2,n3);
    break;
    case 5: 
    cinco(n0,n1,n2,n3);
    break;
    case 6: 
    seis(n0,n1,n2,n3);
    break;
    case 7: 
    sete(n0,n1,n2,n3);
    break;
    case 8: 
    oito(n0,n1,n2,n3);
    break;
    case 9: 
    nove(n0,n1,n2,n3);
    break;
    case 0: 
    zero(n0,n1,n2,n3);
    break;
    default:
    zero(n0,n1,n2,n3);
    break;
  }
  
}
