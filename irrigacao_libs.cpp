#include "irrigacao_libs.h"

//VARIÁVEIS GLOBAIS
bool estado_valvulas = false;


void wait(unsigned long int a) {
  unsigned long int inicio = millis();
  while (millis() - inicio < a);
}
void valvula::ConfCheck(byte porta_rele) {
  pinMode(porta_rele, OUTPUT);
  digitalWrite(porta_rele, HIGH);
  wait(500);
  digitalWrite(porta_rele, LOW);
}
void valvula::turn_on_off(bool enable, byte porta_rele) {
  if (enable == true)
    digitalWrite(porta_rele, HIGH);
  else
    digitalWrite(porta_rele, LOW);

}




void DISPLAY7s::setup_displays() {
  for (byte i = 0; i < 5; i++)
    pinMode(i, OUTPUT);

  digitalWrite(trava, LOW);// e, LOW ela permite os displays ligarem

  for (int i = 9; i < 13; i++) { // checa os enables dos displays e atyiva todos por enquanto
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW); // estou considerando displays7s do tipo catódico por isso estão todos em LOW por enquanto
  }
}

void DISPLAY7s::test_displays(byte n0, byte n1, byte n2, byte n3) { // as entradas dele são o valor em bits do que aparece no display
  for (byte i = 0; i < 10; i++) {
    disp_num(n0, n1, n2, n3, i);
    wait(300);
  }
}

void DISPLAY7s::enable_alldig( byte primeira_porta) {
  for (byte i = primeira_porta; i < primeira_porta + 4; i++)
    digitalWrite(i, LOW);
}

void DISPLAY7s::set_dig(byte digito, byte primeira_porta) { // essa função vai determinar qual algarismo do Display ele vai exibir
  //  Com isso posso controlar o que vejo em cada display separadamente.
  // recomendo colocar um delay pequeno entre cada troca de display pra dar tempo de resposta do CI CD4511
  // além disso estou considerando que estão conectados de forma sequencial a partir de uma primeira porta digital escolhida
  if (digito == primeira_porta) { // display menos significativo
    digitalWrite(digito, LOW);
    digitalWrite(digito + 1, HIGH);
    digitalWrite(digito + 2, HIGH);
    digitalWrite(digito + 3, HIGH);
  }
  else if (digito == primeira_porta + 1) { //2° display menos significativo
    digitalWrite(digito - 1, HIGH);
    digitalWrite(digito, LOW);
    digitalWrite(digito + 1, HIGH);
    digitalWrite(digito + 2, HIGH);
  }
  else if (digito == primeira_porta + 2) { // 3° display menos significativo
    digitalWrite(digito - 2, HIGH);
    digitalWrite(digito - 1, HIGH);
    digitalWrite(digito, LOW);
    digitalWrite(digito + 1, HIGH);
  }
  else if (digito == primeira_porta + 3) { // display mais significativo
    digitalWrite(digito - 3, HIGH);
    digitalWrite(digito - 2, HIGH);
    digitalWrite(digito - 1, HIGH);
    digitalWrite(digito, LOW);
  }
}

void DISPLAY7s::um(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::dois(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::tres(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::quatro(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::cinco(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::seis(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, LOW);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::sete(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, HIGH);
  digitalWrite(n1, HIGH);
  digitalWrite(n2, HIGH);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::oito(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void DISPLAY7s::nove(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, HIGH);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, HIGH);
}
void DISPLAY7s::zero(byte n0, byte n1, byte n2, byte n3) {
  digitalWrite(n0, LOW);
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
}
void DISPLAY7s::disp_num(byte n0, byte n1, byte n2, byte n3, byte var_check) {

  switch (var_check) {
    case 1:
      um(n0, n1, n2, n3);
      break;
    case 2:
      dois(n0, n1, n2, n3);
      break;
    case 3:
      tres(n0, n1, n2, n3);
      break;
    case 4:
      quatro(n0, n1, n2, n3);
      break;
    case 5:
      cinco(n0, n1, n2, n3);
      break;
    case 6:
      seis(n0, n1, n2, n3);
      break;
    case 7:
      sete(n0, n1, n2, n3);
      break;
    case 8:
      oito(n0, n1, n2, n3);
      break;
    case 9:
      nove(n0, n1, n2, n3);
      break;
    case 0:
      zero(n0, n1, n2, n3);
      break;
    default:
      zero(n0, n1, n2, n3);
      break;
  }

}
