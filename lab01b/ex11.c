#include <stdio.h>

//Funcao de soma
int soma(int matriz[2][3]){
  
  for(int i = 0; i<3 ;i++)
    {
      int recebe;
      recebe = matriz[0][i]+ matriz[1][i];
      matriz[1][i] = recebe;
      
    }
  
  return 0;
}
//Funcao de multiplicacao
int mult(int matriz[2][3]){
  for(int i = 0; i<3 ;i++)
    {
      int recebe = matriz[0][i]*matriz[1][i];
      matriz[1][i] = recebe;
    }
  return 0;
}

int main(void) {
  
  //Criando matriz exemplo
  int matriz[2][3] = {1,2,3,4,5,6};
  //

  //Testando a soma
  soma(matriz);
  //Testando a multiplicacao
  mult(matriz);
  //

  
  //Printar a matriz
  for(int i = 0; i < 2;i++)
    {
      for(int j =0; j<3 ; j++)
        {
          printf("%d",matriz[i][j]);
        }
      printf("\n");
    }
  //

  
  return 0;
}