#include <stdio.h>

int main(void) {
  // Crie um programa capaz de criar a transposta de uma matriz.
  // A matriz deve ser lida de teclado.

  // TODO:
  // ler matriz linha por linha, parar se [condição]
  // nº de linhas em variavel, dps size dos arr internos
  // tamanho 1º linha = nº linhas
  // ler linha, mover char para char menor, atoi -> [stdlib]

  int lin, col;
  
  printf("Numero de linhas: ");
  scanf("%d", &lin);
  
  printf("Numero de colunas: ");
  scanf("%d", &col);
  
  int matriz[lin][col];
  int transp[col][lin];

  for(int i = 0; i < lin; i++) {
    for(int j =0; j < col; j++) {
      printf("Valor para [%d]x[%d]: ", i, j);
      scanf("%d",&matriz[i][j]);
    }
  }

  for(int i = 0; i < lin; i++) {
    for(int j =0; j < col; j++) {
      transp[j][i] = matriz[i][j];
    }
  }
  
  for(int i = 0; i < col; i++) {
    for(int j =0; j < lin; j++) {
      printf(" %d ",transp[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}