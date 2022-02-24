#include <stdio.h>

int mult_col(int lin, int col,int matriz[lin][col]) {
  int col_mult, mult;
  
  printf("Digite a coluna a ser multiplicada: ");
  scanf("%d", &col_mult);
  
  printf("Digite o numero a multiplicar: ");
  scanf("%d", &mult);
  
  for(int i = 0; i < col; i++) {
    matriz[i][col_mult] = matriz[i][col_mult]*mult;
  }
  return 0;
}

int mult_lin(int lin, int col,int matriz[lin][col]) {
  int lin_mult, mult;

  printf("Digite a linha a ser multiplicada: ");
  scanf("%d",&lin_mult);

  printf("Digite o numero a multiplicar: ");
  scanf("%d",&mult);

  for(int i = 0; i < col; i++) {
    matriz[lin_mult][i] = matriz[lin_mult][i]*mult;
  }  
  return 0;
}

int main(void) {
// Criando e lendo os valores da matriz
  int lin, col;
  
  printf("Digite os tamanhos da matriz: ");
  scanf("%d %d",&lin,&col);
  
  int matriz[lin][col];
  
  printf("Digite os valores da matriz: ");
  for(int i = 0; i < lin; i++) {
    for(int j =0; j < col; j++) {
      scanf("%d",&matriz[i][j]);
    }
  }
  
// Testando o multiplicador de coluna
mult_col(lin,col,matriz);

// Testando o multiplicador de linha
mult_lin(lin,col,matriz);
  
// Conferir os valores da matriz
  for(int i = 0; i < lin; i++) {
    for(int j =0; j < col; j++) {
      printf("%d",matriz[i][j]);
    }
    printf("\n");
  }
}