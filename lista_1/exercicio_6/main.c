// Exercicio 6 calculo de resistencia de fio

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int e_material;
  float e_diametro, e_comprimento, e_temperatura;
  float s_resistencia, resistividade, area;

printf("Entre com o matrial: ");
scanf("%d", &e_material);

    if (e_material >= 1 && e_material <= 5){
      printf("Digite o diametro [mm]: ");
      scanf("%f", &e_diametro);

      printf("Digite o comprimento [cm]: ");
      scanf("%f", &e_comprimento);

      printf("Digite a temperatura [C]: ");
      scanf("%f", &e_temperatura);

      e_diametro = e_diametro * 0.1;
      area = (3.1416 *(e_diametro * e_diametro)) / 4;

      if ( e_material == 1){
        resistividade = 0.00000159 *( 1+ 0.038*(e_temperatura - 20));
        s_resistencia = (resistividade * e_comprimento)/ area;
        printf("\nMaterial Prata \n");
        printf("A resistencia do fio e: %f  [ohm]\n", s_resistencia);

}else{
  if (e_material == 2){
    resistividade = 0.00000172 *( 1 +0.039*(e_temperatura - 20));
    s_resistencia = (resistividade * e_comprimento)/ area;
    printf("\nMaterial Cobre \n");
    printf("A resistencia do fio e: %f [ohm]\n", s_resistencia);

  }else{
    if (e_material == 3){
      resistividade = 0.00000244 *(1+ 0.034*(e_temperatura - 20));
      s_resistencia = (resistividade * e_comprimento)/ area;
      printf("\nMaterial Ouro \n ");
      printf("A resistencia do fio e: %f [ohm]\n", s_resistencia);

    }else{
      if (e_material == 4){
      resistividade = 0.00000292 *(1 + 0.039* (e_temperatura - 20));
      s_resistencia = (resistividade * e_comprimento)/ area;
      printf("\nMaterial Aluminio \n");
      printf("A resistencia do fio e: %f [ohm]\n", s_resistencia);

      }else{
      resistividade = 0.0000056 *(1 + 0.045* (e_temperatura - 20));
      s_resistencia = (resistividade * e_comprimento)/
      area;
      printf("\nMaterial Tungstenio \n");
      printf("A resietncia do fio e: %f [ohm]\n", s_resistencia);
    }
  }
  }
}
}else{
  printf("Material nao encontrado !!!\n");
}
  return 0;
}
