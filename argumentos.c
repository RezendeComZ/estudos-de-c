// Argumentos em main

// parte das fontes: https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
//                   https://opensource.com/article/19/5/how-write-good-c-main-function

#include <stdio.h>

// argc é o contador de argumentos
// argv é o vetor de argumentos // array // argv = [ "/path/to/a.out", "-o", "foo", "-vv" ];
// The argument vector is guaranteed to always have at least one string in the first index, argv[0], which is the full path to the program executed.

int main(int argc, char *argv[])
{
  printf("Olá!\nVocê inseriu %d argumentos.\n", argc - 1); // descartando o 'path'
  printf("Nome do programa: %s.\n", argv[0]);              // path
  if (argc > 1)
  {
    printf("Lista de argumentos:\n");
    for (int i = 1; i < argc; i++) // i começa em 1 pra pular o 'path'
    {
      printf("- %s\n", argv[i]);
    }
  }
  else
  {
    printf("Programa executado sem argumentos.\n");
  }
}