#include <stdio.h>

int main()
{
  int minhasNotas[] = {10, 6, 9};

  int const colunas = 3; // poderia usar o número
  int const linhas = 2;
  int notas[][colunas] = {
      {10, 6, 9},
      {3, 8, 10}}; // precisa declarar ao menos o número de colunas

  printf("%d\n", notas[0][1]); // 6

  printf("Agora loopando:\n");

  for (int i = 0; i < linhas; i++)
  {
    for (int k = 0; k < colunas; k++)
    {
      printf("%d ", notas[i][k]);
    }
    printf("\n");
  }
  return 0;
}
