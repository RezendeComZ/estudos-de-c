#include <stdio.h>
#include <stdbool.h>

int main()
{
  if (true)
    printf("If em uma linha\n"); // o vs code inpede quando eu salvo e joga para a próxima linha // O jeito que tá é uma péssima prática, pq e não tá na mesma linha, parece que pode executar outras coisas, quando na verdade só consegue executar o primeiro comando
  return 0;
}