#include <stdio.h>

  // Crie uma função capaz de multiplicar uma linha de uma
  // matriz por um dado número. Faça o mesmo para uma coluna.
  // 
  // seems easy enough -> pegar nº por teclado
  // 
void MultMat(int lines, int cols, int matrix[lines][cols], int line, int col, int num) {
  for (int i = 0; i < cols; ++i) {
    matrix[line][i] *= num;
  }

  for (int i; i < lines; ++i) {
    matrix[i][col] *= num;
  }
  
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < cols; j++) {
      printf(" %d ",matrix[i][j]);
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
  printf("\n");
  
  for (int i = 0; i < lin; i++) {
    for (int j =0; j < col; j++) {
      printf(" %d ",matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
  int lin_m, col_m, num;

  printf("Linha para multiplicar: ");
  scanf("%d", &lin_m);
  
  printf("Coluna para multiplicar: ");
  scanf("%d", &col_m);
  
  printf("Valor para multiplicar: ");
  scanf("%d", &num);

  MultMat(lin, col, matriz, lin_m, col_m, num);
  return 0;
}