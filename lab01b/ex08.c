#include <stdio.h>

void transpMat(int lines, int cols, int matrix[lines][cols]) {
  int transp[cols][lines];
  
  for (int i = 0; i < lines; i++) {
    for (int j =0; j < cols; j++) {
      transp[j][i] = matrix[i][j];
    }
  }
  
  for (int i = 0; i < cols; i++) {
    for (int j =0; j < lines; j++) {
      printf(" %d ",transp[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  // programa do 6, mas em func -> ponteiros >w< 
  int lin, col;
  
  printf("Numero de linhas: ");
  scanf("%d", &lin);
  
  printf("Numero de colunas: ");
  scanf("%d", &col);
  
  int matriz[lin][col];

  for(int i = 0; i < lin; i++) {
    for(int j =0; j < col; j++) {
      printf("Valor para [%d]x[%d]: ", i, j);
      scanf("%d",&matriz[i][j]);
    }
  }

  transpMat(lin, col, matriz);
  return 0;
}