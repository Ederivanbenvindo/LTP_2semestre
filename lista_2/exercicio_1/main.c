//Exercicio 1 da lista 2

#include <stdio.h>


int main(void) {

int e_nro_1, e_nro_2, mmc, valor_aux;

printf("Entre com 1o numero: ");
scanf("%i", &e_nro_1);

printf("Entre com 2o numero: ");
scanf("%i", &e_nro_2);

mmc = 1;
valor_aux = 2;

while( e_nro_1 > 1 && e_nro_2 > 1){
    while(e_nro_1 % valor_aux > 0 || e_nro_2 % valor_aux > 0 ){
        valor_aux = valor_aux + 1;
      }
        if (e_nro_1 % valor_aux == 0){
          e_nro_1 = e_nro_1 - 1;
        }
        if(e_nro_2 % valor_aux == 0){
          e_nro_2 = e_nro_2 - 1;
        }
        mmc = mmc * valor_aux;
}

printf("O mmc e: %i", mmc);


  printf("\n");
  return 0;
}
