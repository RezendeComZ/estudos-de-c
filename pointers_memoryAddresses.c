// https://youtu.be/KJgsSFOSQv0?t=11556

#include <stdio.h>

int main()
{
  char nome[] = "Gabriel";
  int idade = 31;
  double nota = 8.5;

  printf("Nome: %p\nIdade: %p\n", &nome, &idade); // endereço na memória, ex: 0x7ffeed6b5920

  return 0;
}