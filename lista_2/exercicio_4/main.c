#include <stdio.h>

int main(void) {

  int botao_liga;

  printf("Digite 1 para ligar pisca-pisca: ");
  scanf("%d", &botao_liga);

  if(botao_liga == 1){
    while(botao_liga == 1){
      printf(" \n***Pisca***");
      sleep(1);
      printf("\n");
      sleep(1);
    }
  }else{
    printf("\nPara ligar digite 1: \n");
  }
  return 0;
}
