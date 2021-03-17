#include <stdio.h>

int main(void) {
 
 int e_valor_A, e_valor_B, e_var_tmp;
 
    printf("Entre com um numero A: ");
    scanf("%d", &e_valor_A);

    printf("Entre com um numero B: ");
    scanf("%d", &e_valor_B);

    e_var_tmp = e_valor_A;
    e_valor_A = e_valor_B;
    e_valor_B = e_var_tmp;

    printf("Novo valor A: %d\n", e_valor_A);
    printf("Novo valor B: %d\n", e_valor_B);
 
  
  return 0;
}
