#include <stdio.h>
#include <unistd.h>

int main(void) {

int e_temperatura;

printf("Entre com a temperatura do motor: ");
scanf("%i", &e_temperatura);
//printf("\n");
if(e_temperatura < 105){
  while( e_temperatura < 105){
    if( e_temperatura <= 40){
     while(e_temperatura <= 40){
     printf("%i oC  motor frio!\n", e_temperatura);
     sleep(1);
     e_temperatura ++;
     } 
    }
    printf("\n");
        if(e_temperatura < 70) {
         while(e_temperatura < 70){
         printf("%i oC  motor aqecendo!\n",e_temperatura);
         sleep(1);
         e_temperatura ++;  
         }
        }
        printf("\n");
        if(e_temperatura < 90){
          while(e_temperatura < 90){
          printf("%i oC  temperatura de trabalho!\n", e_temperatura);sleep(1);
          e_temperatura ++;  
          }
        }
        printf("\n");
        if(e_temperatura >= 90){
          while(e_temperatura >= 71){
          printf("%i oC  Eletroventilador ligado!\n",e_temperatura);
          sleep(1);
          e_temperatura --;  
          }
        }
    }
}else{
  printf(" %i oC  motor superaquecido!!!!!!!!!\n", e_temperatura);
  printf("MOTOR NAO FUNCIONA!!!!!!!!!!!!");
 printf("\n");
} 
  return 0;
}
