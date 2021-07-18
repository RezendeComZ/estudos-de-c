// youtu.be/WRyqzqXK2dA
#include <stdio.h>

int main()
{
  int numero1;
  char numero2;
  scanf("%d", &numero1); // scanf é o mais simples, mas não é o melhor para aceitar inputs
  // getchar(); // pra dar o flush no buffer, desativei pra ver a dando errado
  scanf("%c", &numero2); // nem sempre dois scanf funcionam, com CHAR dá zica, ele ele pega o "\n" que ficou no buffer do anterior

  printf("%d e %d\n", numero1, numero2);
  return 0;
}