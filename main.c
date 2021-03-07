// Numero maior

#include <stdio.h>

int main(void) {

  int e_primeiro_numero, e_segundo_numero;
  
  // Entradas

  printf("entre com primeiro numero:");
  scanf("%d", &e_primeiro_numero );

  printf("entre com segundo numero:");
  scanf("%d", &e_segundo_numero );

// Saidas
  if( e_primeiro_numero > e_segundo_numero){
printf("primeiro numero maior que o segundo");
}

if( e_segundo_numero > e_primeiro_numero){
  printf("segundo numero maior que o primeiro");
}

  return 0;
}
