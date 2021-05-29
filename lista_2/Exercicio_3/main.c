#include <stdio.h>

int main(void) {

int e_num[5];
int v_cont_1, v_cont_2, v_aux;

  for(v_cont_1 = 0; v_cont_1 < 5; v_cont_1 ++){
    printf("Entre com um mumero: ");
    scanf("%i", &e_num[v_cont_1]);
  }

 /* for(v_cont_1 = 0; v_cont_1 < 4;v_cont_1 ++ ){
    for(v_cont_2 = v_cont_1 + 1; v_cont_2 < 5; v_cont_2 ++){
        if(e_num[v_cont_1] < e_num[v_cont_2] ){
          v_aux = e_num[v_cont_2];
          e_num[v_cont_2] = e_num[v_cont_1];
          e_num[v_cont_1] = v_aux;
        }
    }
  }*/
  v_cont_1 = 0;

    while(v_cont_1 < 4){
    v_cont_2 = v_cont_1 + 1;
      while(v_cont_2 < 5){
      if(e_num[v_cont_1] < e_num[v_cont_2]){
        v_aux = e_num[v_cont_2];
        e_num[v_cont_2] = e_num[v_cont_1];
        e_num[v_cont_1] = v_aux;
      }
      v_cont_2 ++;
      }
    v_cont_1 ++;
    }

  for( v_cont_1 = 0; v_cont_1 < 5; v_cont_1 ++){
    printf("%i\n", e_num[v_cont_1]);
  }

  printf("\n");
  return 0;
}
