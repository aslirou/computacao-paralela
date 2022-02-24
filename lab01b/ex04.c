#include <stdio.h>

int main(void) {
  const char OFFSET = 'a' - 'A';

  char name1[30];
  char name2[30];

  printf("Insira um nome: ");
  scanf("%s", name1);

  printf("Insira um nome: ");
  scanf("%s", name2);

  // if(name1[0] >= 'a' && name1[0] <= 'z') {
  //   name1[0] -= OFFSET;
  // }

  // if(name2[0] >= 'a' && name2[0] <= 'z') {
  //   name2[0] -= OFFSET;
  // }

  for (int i = 0; i < 30; ++i) {
    if ((name1[i] >= 'a' && name1[i] <= 'z' ? name1[i]- OFFSET : name1[i]) < (name2[i] >= 'a' && name2[i] <= 'z' ? name2[i]- OFFSET : name2[i])) {
      printf("1: %s\n2: %s\n", name1, name2);
      return 0;
    } else if ((name1[i] >= 'a' && name1[i] <= 'z' ? name1[i]- OFFSET : name1[i]) > (name2[i] >= 'a' && name2[i] <= 'z' ? name2[i]- OFFSET : name2[i])) {
      printf("1: %s\n2: %s\n", name2, name1);
      return 0;
    }
  }

  printf("1: %s\n2: %s\n", name1, name2);
  return 0;
}