#include <stdio.h>


int modulo(int lin ,int col ,int matriz[lin][col])
{
  for(int i = 0; i < lin ; i++)
  {
    for(int j =0; j <col ; j++)
    {
      if(matriz[i][j]<0)
      {
        matriz[i][j] = -matriz[i][j];
      }
    }
  }

return 0;
}

int main(void) 
{

  
//Criar matriz teste
  int mat_teste[3][3];
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0 ; j < 3 ; j++)
        {
          mat_teste[i][j] = -i;
        }
    }
  
//Confere se ta negativo
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0 ; j < 3 ; j++)
        {
          printf("%d",mat_teste[i][j]);
        }
      printf("\n");
    }
  printf("\n");

//Chama a funcao
  modulo(3,3,mat_teste);

//Confere se ta positivo
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0 ; j < 3 ; j++)
        {
          printf("%d",mat_teste[i][j]);
        }
      printf("\n");
    }




  return 0;
}