#include <stdio.h>

int main()
{
  int x = 5;
  int *P = &x; // não é o valor, é a localização // pointer
  *P = 20;     // x agora é igual a 20 // Indirection Operator
  printf("Valor de x: %d\n", x);

  // Outro exemplo:
  int pedacosDePizza = 20;
  int *apontador = &pedacosDePizza;
  *apontador = 25;
  printf("pedaços de pizza: %d\n", pedacosDePizza); // 25
  printf("imprimindo o pointer: %d\n", *apontador); // 25, mesma coisa // precisa do *, indirection operator

  // Não funciona:
  // *apontador++; // Acontece que * tem precedência, então acontece isso: *(apontador++); // ou seja, não funciona
  // Isso funciona:
  (*apontador)++;

  printf("Incrementando: %d\n", *apontador); // 26
  return 0;
}