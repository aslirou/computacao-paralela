#include <stdio.h>

void remover(char string[100])
{
  char excluir;
  printf("Digite o caracter a excluir: ");
  scanf("%c",&excluir);
  for (int i = 0;i <100;i++)
  {
    if(string[i] == excluir)
    {
      string[i] = '\0';
    }
  }
}



int main(void) {
  char string[100] = {"AFMnFRDnGexXfLFJ7MuLHQLWnz4izNmOlm5wE0LqTauvqWHZ3Xz37uOquvWhRZQqTlYYckrRXzkHvl8cl7lhRLWDYtNLboqlIZRW"};
  remover(string);
  for (int i = 0; i<100 ;i++)
    {
      printf("%c",string[i]);
    }
  return 0;
}