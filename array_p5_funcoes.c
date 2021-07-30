// Quando os arrays vão para funções, eles vão como pointers

#include <stdio.h>

void printIncArray(int arr[], int size) // Ele passou o pointer! Por isso quando rola um INC, ele incremente a variável original
{
  printf("Imprimindo Array:\n");
  for (int i = 0; i < size; i++)
  {
    arr[i]++; // tá aumentando a variável original
    printf("Item %d: %d\n", i, arr[i]);
  }
}

int main()
{
  int pedacosPorRefeicao[] = {2, 3, 5, 5};
  int pedacosPorRefeicaoSize = sizeof(pedacosPorRefeicao) / sizeof(pedacosPorRefeicao[0]);

  printf("Tamanho do array: %d\n\n", pedacosPorRefeicaoSize);

  printIncArray(pedacosPorRefeicao, pedacosPorRefeicaoSize);

  printf("O primeiro item do array era 2 antes de chamar a função e virou: %d\n", pedacosPorRefeicao[0]); // foi de 2 para 3

  return 0;
}