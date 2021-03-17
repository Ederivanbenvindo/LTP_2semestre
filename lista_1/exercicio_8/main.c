// Exercicio 8, calcolo de resistencia equivalente em um circuito pararlelo de quatro resistores.

#include <stdio.h>

int main(void) {

//Variaveis
  float e_R1, e_R2, e_R3, e_R4;
  float Req_1, Req_2, s_Req_t;

      printf("Entre com valor do Resistor 1: ");
      scanf("%f", &e_R1);

      printf("Entre com valor do Resistor 2: ");
      scanf("%f", &e_R2);

      printf("Entre com valor do resistor 3: ");
      scanf("%f", &e_R3);

      printf("Entre com valor do Resistor 4: ");
      scanf("%f", &e_R4);


      Req_1 = (e_R1 * e_R2) / (e_R1 + e_R2);
      Req_2 = (e_R3 * e_R4) / (e_R3 + e_R4);
      s_Req_t = (Req_1 * Req_2) / (Req_1 + Req_2);

      printf("\nA resistencia total e: %.3f", s_Req_t);

  return 0;
}
