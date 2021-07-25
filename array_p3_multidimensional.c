#include <stdio.h>

int main()
{
  int notasAlunos[5][4];                          // 5 linhas, 4 colunas
  notasAlunos[4][3] = 15;                         // escrevendo no último item
  printf("Último item: %d\n", notasAlunos[4][3]); // acessando o último item

  return 0;
}