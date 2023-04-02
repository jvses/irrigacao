#ifndef irrigacao_auto
#define irrigacao_auto

#include "virtuabotixRTC.h"
//#include <Arduino.h>




class DISPLAY7s {
  
public:

//void setup_displays();

void set_dig(byte digito, byte primeira_porta);
void disp_num(byte n0, byte n1, byte n2,byte n3,byte var_check);

void um(byte n0, byte n1, byte n2,byte n3);
void dois(byte n0, byte n1, byte n2,byte n3);
void tres(byte n0, byte n1, byte n2,byte n3);
void quatro(byte n0, byte n1, byte n2,byte n3);
void cinco(byte n0, byte n1, byte n2,byte n3);
void seis(byte n0, byte n1, byte n2,byte n3);
void sete(byte n0, byte n1, byte n2,byte n3);
void oito(byte n0, byte n1, byte n2,byte n3);
void nove(byte n0, byte n1, byte n2,byte n3);
void zero(byte n0, byte n1, byte n2,byte n3);
//funções para exibição do número


};

#endif
