int main(void)
 {
  
  int e_nro_1, e_nro_2, e_nro_3;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &e_nro_1);

    printf("Entre com segundo numero: ");
    scanf("%d", &e_nro_2);

    printf("Entre com terceiro numero: ");
    scanf("%d", &e_nro_3);



  if (e_nro_1 > e_nro_2){
    if (e_nro_2 > e_nro_3)
    {
      printf("%d\n", e_nro_3);
      printf("%d\n", e_nro_2);
      printf("%d\n", e_nro_1);
    }else{
      if(e_nro_1 > e_nro_3)
      {
        printf("%d\n", e_nro_2);
        printf("%d\n", e_nro_3);
        printf("%d\n", e_nro_1);
      }else{
        printf("%d\n", e_nro_2);
        printf("%d\n", e_nro_1);
        printf("%d\n", e_nro_3);
      }
    }

    
  }else{
    if(e_nro_1 > e_nro_3)
    {
      printf("%d\n", e_nro_3);
      printf("%d\n", e_nro_1);
      printf("%d\n", e_nro_2);
    }else{
      if(e_nro_2 > e_nro_3){
      printf("%d\n", e_nro_1);
      printf("%d\n", e_nro_3);
      printf("%d\n", e_nro_2);
    }else{
      printf("%d\n", e_nro_1);
      printf("%d\n", e_nro_2);
      printf("%d\n", e_nro_3);
    }
  }
  }
  return 0;
  
 }
