#include <stdio.h>

int main(void) {
  char Str[100] = "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
  
  char new_char;
  int new_pos;

  printf("Digite o caracter a inserir: ");
  scanf("%c", &new_char);

  printf("Digite a posição do char (max: 100): ");
  scanf("%d", &new_pos);

  Str[new_pos] = new_char;
  
  printf("STRING: %s\n", Str);

  return 0;
}