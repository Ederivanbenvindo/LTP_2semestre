// Calculo de resitencia total no circuito em serie 
#include <stdio.h>

int main(void) {

  float e_fonte, e_resistor1, e_resistor2, e_resistor3, e_resistor4;
  float s_resistencia_total, s_corrente_total, s_Vr1, s_Vr2, s_Vr3, s_Vr4;

  printf("Entre com resitor 1: ");
  scanf("%f,", &e_resistor1);

  printf("Entre com resistor 2: ");
  scanf("%f", &e_resistor2);
  
  printf("Entre com resistor 3: ");
  scanf("%f", &e_resistor3);

  printf("Entre com resistor 4: ");
  scanf("%f", &e_resistor4);

  printf("Entre com valor da fonte: ");
  scanf("%f", &e_fonte);

  s_resistencia_total = e_resistor1 + e_resistor2 + e_resistor3 + e_resistor4;
  s_corrente_total = e_fonte / s_resistencia_total;
  s_Vr1 = s_corrente_total * e_resistor1;
  s_Vr2 = s_corrente_total * e_resistor2;
  s_Vr3 = s_corrente_total * e_resistor3;
  s_Vr4 = s_corrente_total * e_resistor4;

  printf("\nResistencia total: %.3f [ohm]\n\n", s_resistencia_total);

  printf("Corrente total: %f [A]\n\n" , s_corrente_total);
  
  printf("Tensao resistor 1: %.3f [V]\n\n", s_Vr1);

  printf("Tensao resistor 2: %.3f [V]\n\n", s_Vr2);

  printf("Tensao resistor 3 %.3f [V]\n\n", s_Vr3);

  printf("Tensao resistor 4 %.3f [V]\n\n", s_Vr4);


  return 0;
}
