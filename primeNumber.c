#include <stdio.h>

int primo(int num, int max)
{
  if (num % 2 != 0)
  {
    if (num < max)
    {
      printf("%d, ", num);
    }
    else
    {
      printf("%d.\n", num);
    }
  }
  return 0;
}

int main()
{
  int max;
  printf("Até qual número primo você quer imprimir? ");
  scanf("%d", &max);

  for (int i = 1; i <= max; i++)
  {
    primo(i, max);
  }
  return 0;
}