#ifndef irrigacao_auto
#define irrigacao_auto

#include "virtuabotixRTC.h"
//#include <Arduino.h>


///////CONSTANTES NOMEADAS PARA USAR
//Os Bs determinam o valor numérico que vão aparecer no display
#define b0 0 // bit menos significativo
#define b1 1
#define b2 2
#define b3 3// bit mais significativo
#define trava 4 // trava para controle do display com CD4511
// Os Ds determinam qual o display vai exibir o número
#define d0 9 // display menos significativo
#define d1 10
#define d2 11
#define d3 12 // display mais significativo

//Botões e LEDS
#define verde 15 //A1
#define vermelho 16 //A2 
#define rbot 17 //A3 (botão direito)
#define lbot 18 //A4 (botão esquerdo)
#define rele   19 //A5 (torneira)

/////// As variáveis globais não são aceitas aqui. Elas estão no .cpp da biblioteca ///////


// deixei algumas funções úteis que independem de objeto  pra ficarem aqui
void wait(unsigned long int a);//função pra substituir a delay



// classe para torneira
class valvula { // nessa clase eu vou controlar as torneiras
  public:
void ConfCheck(byte porta_rele);
void turn_on_off(bool enable,byte porta_rele);

};

class DISPLAY7s {
  public:

    void setup_displays(); // Tô pensando em deixar essa de fora e manter a seleção de portas padronizada de forma constante
    void test_displays(byte n0, byte n1, byte n2, byte n3); // exibe todos os números no display pro usuário checar se não temnada queimado

    void enable_alldig( byte primeira_porta);
    void set_dig(byte digito, byte primeira_porta);// seta  display específico que vai aparecer o número
    void disp_num(byte n0, byte n1, byte n2, byte n3, byte var_check);

    void um(byte n0, byte n1, byte n2, byte n3);
    void dois(byte n0, byte n1, byte n2, byte n3);
    void tres(byte n0, byte n1, byte n2, byte n3);
    void quatro(byte n0, byte n1, byte n2, byte n3);
    void cinco(byte n0, byte n1, byte n2, byte n3);
    void seis(byte n0, byte n1, byte n2, byte n3);
    void sete(byte n0, byte n1, byte n2, byte n3);
    void oito(byte n0, byte n1, byte n2, byte n3);
    void nove(byte n0, byte n1, byte n2, byte n3);
    void zero(byte n0, byte n1, byte n2, byte n3);
    //funções para exibição do número
};

#endif
