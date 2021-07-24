// Enquanto não inserir a condição certa ele repete o DO
// BUG: Se colocar caractere ele entra em loop do DO e não deixa o scanf funcionar

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int input;
  do
  {
    printf("Insira um número de 0 a 9: ");
    scanf("%d", &input);
  } while (input < 0 || input > 9);
  return 0;
}