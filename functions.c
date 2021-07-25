#include <stdio.h> // biblioteca que contém o printf() e outras funções

int fatorial(int num) // não tá bonito, fiz de cabeça // funciona tbm sem o int no parametro, não sei pq
{
  int count = num;
  int total = num;

  while (count > 1)
  {
    total *= count - 1;
    printf("Count: %d Total: %d\n", count, total);
    count--;
  }
  return total;
}

// Usando FOR
int fatorialFor(int num) // jeito melhor e mais bonito
{
  int fatorial = 1; // equivalente ao "total" em cima
  for (int i = num; i > 1; i--)
  {
    fatorial *= i;
  }
  return fatorial;
}

int main()
{
  // printf("argumento\n");

  printf("Quer saber o fatorial de qual número? ");
  int numero;
  scanf("%i", &numero);
  printf("O fatorial de %d é %d\n", numero, fatorialFor(numero));
  return 0;
}