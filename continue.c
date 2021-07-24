#include <stdio.h>

int main()
{
  int i = 0;
  while (i < 10)
  {
    if (i == 7)
    {
      printf("\n7 é da hora\n");
      i++;      // Existe isso aqui pq com o continue ele vai executar o while novamente pulando o i++ depois do if, entao precisamos colocar
      continue; // O break sairia do while, o continue fez executar o while de novo, pulando o restante que vem aqui em baixo // Ele não imprime o 7 de novo, nem incrementa, por isso tem o i++ aqui em cima
    }
    printf("%d ", i);
    i++;
  }
  printf("\n");
}