#include <stdio.h>

int main(void) {

int v_cont, v_aux, v_resto, v_produto;

  for( v_cont = 100; v_cont < 1000; v_cont ++){
      v_aux = v_cont;
      v_produto = 1;

      while(v_aux > 0){
        v_resto = v_aux % 10;
        v_produto = v_produto * v_resto;
        v_aux = v_aux / 10;
      }
      printf("O produto dos digitos (%d) eh: %d \n", v_cont, v_produto);
    }

  printf("\n");
  return 0;
}
