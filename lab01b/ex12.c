#include <stdio.h>

int main(void) {
  // Faça uma função que retorne a posição de um dado caracter
  // dentro de uma string.
  // 
  // seems easy enough
  const char OFFSET = 'a' - 'A';
  
  char PANGRAM[] = "the quick brown fox jumps over the lazy dog";
  char find;
  printf("PANGRAM: %s\n", PANGRAM);

  printf("Which char? : ");
  scanf("%c", &find);

  if(find >= 'A' && find <= 'Z') { find += OFFSET; }

  for (int i; i < 43; ++i) {
    if (PANGRAM[i] == find) { printf("Index: %i\n", i); return 0; }
  }

  printf("Char not found!\n");
  
  return 0;
}