#include <stdio.h>

int main(void) {
  int N1,N2,N3,ME;
  printf("Digite as notas do aluno: ");
  scanf("%d",&N1);
  scanf("%d",&N2);
  scanf("%d",&N3);
  scanf("%d",&ME);
  int MA = (N1+N2*2+N3*3+ME)/7;
  if (MA>=9){
    printf("Conceito: A");
  }
  if (MA >= 7.5 && MA < 9){
    printf("Conceito: B");
  }
  if (MA >= 6 && MA < 7.5){
    printf("Conceito: C");
  }
  if (MA >= 4 && MA< 6){
    printf("Conceito: D");
  }
  if (MA<4){
    printf("Conceito: E");
  }
  
  
  return 0;
}