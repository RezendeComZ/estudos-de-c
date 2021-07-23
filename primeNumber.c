#include <stdio.h>
#include <stdbool.h>

int primo(int num, int max)
{
  bool ehPrimo = true;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      ehPrimo = false;
    }
  }
  if (ehPrimo)
  {
    if (num != 2)
    {
      printf(", %d", num);
    }
    else
    {
      printf("%d", num);
    }
  }
  return 0;
}

int main()
{
  int max;
  printf("Até qual número primo você quer imprimir? ");
  scanf("%d", &max);

  for (int i = 2; i <= max; i++)
  {
    primo(i, max);
  }
  printf(".\n");
  return 0;
}