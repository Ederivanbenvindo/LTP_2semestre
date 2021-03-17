// Entre com tres numeros aleatorios para sair em ordem decrescente.

#include <stdio.h>

int main(void) {
  
  // VARIAVEIS
int e_numero1, e_numero2, e_numero3;

          //ENTRADAS
    printf("Entre com o primeiro numero: ");
    scanf("%d,", &e_numero1);

    printf("Entre com segundo numero: ");
    scanf("%d", &e_numero2);

    printf("Entfre com o terceiro numero: ");
    scanf("%d", &e_numero3);

      //SAIDAS
  if ( e_numero2 > e_numero1 && e_numero2 < e_numero3){
    
    printf("\n%d\n", e_numero3);
    printf("%d\n", e_numero2);
    printf("%d\n", e_numero1);

  }else if (e_numero3 > e_numero1 && e_numero3 < e_numero2){
    printf("\n%d\n", e_numero2);
    printf("%d\n", e_numero3);
    printf("%d\n", e_numero1);

  }else if (e_numero1 > e_numero2 && e_numero1 < e_numero3){
    printf("\n%d\n", e_numero3);
    printf("%d\n", e_numero1);
    printf("%d\n", e_numero2);

  }else if (e_numero3 > e_numero2 && e_numero3 < e_numero1) {
    printf("\n%d\n", e_numero1);
    printf("%d\n", e_numero3);
    printf("%d\n", e_numero2);

  }else if (e_numero1 > e_numero3 && e_numero1 < e_numero2){
    printf("\n%d\n", e_numero2);
    printf("%d\n", e_numero1);
    printf("%d\n", e_numero3);

  }else{ 
    printf("\n%d\n", e_numero1);
    printf("%d\n", e_numero2);
    printf("%d\n", e_numero3);
  } 
  return 0;
}
