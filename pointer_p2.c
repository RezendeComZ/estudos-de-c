// Alterando o valor de uma variável
#include <stdio.h>

// Usando essa função no segundo exempl
int dobra(int num)
{
  return num * 2;
}

// Essa é void pq não retorna nada // Usado no terceiro exemplo
void dobraPointer(int *num)
{
  *num = *num * 2;
}

int main()
{
  // 1
  int x = 10;
  x = x * 2;
  printf("1: %d\n", x); // 20

  // 2
  int y = 10;
  printf("2: %d\n", dobra(y)); // 20 // mas não alterou o valor da original

  // 3
  int z = 10;
  dobraPointer(&z);
  printf("3: %d\n", z); // Tcharam! mudou o valor de z pela função

  return 0;
}