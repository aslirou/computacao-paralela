#include <stdio.h>

//Criando struct de pessoa
struct pessoa
{
char nome[20];
int idade;
int peso;
int altura;
};





int main(void) 
{
  
struct pessoa lista[3];

for(int i = 0 ;i <3 ; i++)
{
  printf("Digite o nome da pessoa: ");
  scanf("%s",lista[i].nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d",&lista[i].idade);
  printf("Digite o peso da pessoa: ");
  scanf("%d",&lista[i].peso);
  printf("Digite a altura da pessoa: ");
  scanf("%d",&lista[i].altura);
  printf("\n");
  
}
  
//Conferir a leitura correta dos nome//
  for(int j =0; j<3;j++)
  {

    
    for(int i = 0; lista[j].nome[i] != '\0';i++)
    {
      printf("%c",lista[j].nome[i]);
    }
    printf("\n");
    
    printf("Idade: %d\n",lista[j].idade);
    printf("Altura: %d\n",lista[j].altura);
    printf("Peso: %d\n",lista[j].peso);
  

    printf("\n");
    
  }



  return 0;
}