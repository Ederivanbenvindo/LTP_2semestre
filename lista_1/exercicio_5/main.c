// Calculo do peso ideal

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int e_sexo;
float e_altura, s_peso_ideal ;

 printf("******CALCULE O PESO IDEAL*****\n \n");

    printf(" Digite o sexo: ");
    scanf("%d", &e_sexo );

    if (e_sexo >= 0 && e_sexo <=1){
      printf("Digite a altura: ");
      scanf("%f", &e_altura);
    
      if (e_sexo == 0){
        s_peso_ideal = (62.1 * e_altura)- 44.7 ;
        printf("Peso ideal %.2f\n", s_peso_ideal);
      }else if (e_sexo == 1){
        s_peso_ideal = (72.7 * e_altura)- 58;
        printf("Peso ideal %.2f\n",s_peso_ideal);
      }
      
    
    }else{
      printf("Sexo nao encontrado!!\n");
    }

  return 0;
}
