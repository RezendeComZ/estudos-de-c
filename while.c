#include <stdio.h>

int main()
{
  int min = 0;
  int max = 100;
  int steps = 5;
  int posicao = min;

  while (posicao <= max)
  {
    printf("%i\n", posicao);
    posicao += steps;
  }
}