// https://youtu.be/d5cLIiTSoTA
// Versão do Caleb com o raiz quadrada

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int main()
{
  int input = 25;
  int isPrime = true;

  for (int i = sqrt(input); i > 1; i--)
  {
    printf("%d ", i);
    if (input % i == 0)
    {
      isPrime = false;
    }
  }
  if (isPrime)
  {
    printf("\nIs Prime!\n");
  }
  else
  {
    printf("\nNot Prime!\n");
  }
}