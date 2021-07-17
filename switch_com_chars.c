#include <stdio.h>

int main()
{
  int numero = 80;
  printf("Valor da CHAR %d: %c\n\n", numero, numero); // CHAR "P"

  int letra = 'a'; // repare que é um INT com uma letra com single quote
  printf("Número da letra: %d\n\n", letra);

  printf("Qual a letra? (número da char) "); // Colocar qualquer letra cai no primeiro "case"
  scanf("%i", &letra);                       // sem o scanf e preenchendo outra letra manualmente funciona usand 'c' por exemplo, mas no scanf não

  switch (letra)
  {
  case ('a'):
    printf("Letra a!\n");
    break;
  case 98:
    printf("Letra b!\n");
    break;
  case ('c'):
    printf("Letra c!\n");
    break;
  default:
    printf("Letra não encontrada\n");
    break;
  }
}