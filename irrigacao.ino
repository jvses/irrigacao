// #include <RTClib.h>

#include "irrigacao_libs.h"



//Controle dos disp7s
DISPLAY7s dt;
valvula torneira1;

byte val=0;
// o RTC usa os D{5,6,7}

void setup() {
  // put your setup code here, to run once:
  // checar RTC
  // setup e check dos Displays e botões
  
  dt.setup_displays(); //seta os pinos para exibição dos displays
// essa função setup dos leds já deixam todos os displays acionados pra ter a mesma saída

  dt.test_displays(b0,b1,b2,b3);// pisca os displays exibindo os algarismos em espaços de 300ms
  // checar torneira
  torneira1.ConfCheck(rele);
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
