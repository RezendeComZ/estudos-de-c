// DEFINE é tipo uma const. Você não consegue mudar o valor dela.
// Symbolic Constants é o nome do livro do C
#include <stdio.h>

#define ZERO 0 // Maiúsculo por padrão, mas não é necessaário
#define DEZ 10 // não precisa de ;
#define NOME "Gabriel"
#define CONTA (10 / 2) // 5

int numeroDez = DEZ;
char meuNome[] = NOME;
int dezPor2 = CONTA;

int main()
{
  printf("Valor de dez: %d\n", numeroDez);
  printf("Valor de dez: %d\n", DEZ);
  printf("Meu nome: %s\n", meuNome);
  printf("Dez divido por 2: %d\n", dezPor2);
}