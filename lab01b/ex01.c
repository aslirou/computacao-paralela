#include <stdio.h>

int retornamenor( int x , int matriz[x][x]){
  int menor = matriz[0][0];
  int linha = 0;
  for(int i = 0;i <= x; i ++ ){
    for(int j = 0; j <= x; j ++){
      if (menor > matriz[i][j]){
        menor = matriz[i][j];
        linha = i;
      }
    }
  }
  return linha+1;
}

int main(void) {
  int matriz[4][4] = {
    -10000,8,7,6,
    5,4,3,2,
    1,0,-1,2,
    3,-4,-5,-100
  };//Matriz exemplo
  
  int tam;
  int linha;
  
  tam = sizeof(matriz)/sizeof(matriz[0]);
  printf("tamanho: %d\n",tam);
  
  linha  = retornamenor(tam,matriz);
  printf("linha: %d",linha);
  
  return 0;
}