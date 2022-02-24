#include <stdio.h>

int main() {
//Codigo para criar a lista
  
  int tam = 0;

  while(tam%2 != 1) {
    printf("Digite o numero maximo impar: ");
    scanf("%d",&tam);
  }
  
  int vetor[tam];
  for(int i = 0 ; i < tam ; ++i) {
    vetor[i] = i+1;
  }
  
// Codigo para apresentar a saida
  
  for(int i = 0; i<tam;i++) {
    for(int j = 0 + i; j<tam - i; j++) {
      printf("%d",vetor[j]);
    }
    printf("\n");
  }

  return 0;
}