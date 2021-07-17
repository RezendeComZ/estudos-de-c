#include <stdio.h>
// Não da pra usar pra double, USAR INT
// Não funciona com ranges
// Número limitado de opções

int main()
{
  int level = 656;

  switch (level)
  {
  case 1:
    printf("O valor é 1\n");
    break;
  case 2:
    printf("O valor é 2\n");
    break;
  default:
    printf("O valor é: %d\n", level);
  }

  return 0;
}