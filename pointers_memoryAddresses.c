// https://youtu.be/KJgsSFOSQv0?t=11556

#include <stdio.h>

int main()
{
  char nome[] = "Gabriel";
  int idade = 31;
  double nota = 8.5;

  printf("Nome: %p\nIdade: %p\n", &nome, &idade); // endereço na memória, ex: 0x7ffeed6b5920

  printf("----\n\n");
  int *pIdade = &idade;

  printf("pIdade: %p\n", pIdade);   // 0x7ffeebd60918
  printf("*pIdade: %d\n", *pIdade); // 31 // Dereferencing pointers

  return 0;
}