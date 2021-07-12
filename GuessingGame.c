// O usuário tem que advinhar um número de 0 a 5

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // rand()
#include <time.h>   // time()

int main()
{
  srand(time(NULL)); // seed de random do relógio
  int maxValue;
  int randomNumber; // vai dar de 0 a 5
  int numUsuario;

  printf("Até qual número quer eu pense? ");
  scanf("%i", &maxValue);

  randomNumber = rand() % maxValue + 1; // semente do rand()

  printf("De 0 a %d, em qual número eu pensei? ", maxValue);
  scanf("%d", &numUsuario);

  if (numUsuario == randomNumber)
  {
    printf("Advinhou! Era %d mesmo!\n", randomNumber);
    return 0; // Acabaria aqui e não executaria mais nada do programa
  }
  else if (numUsuario > 5)
  {
    printf("Ô fião, é de 0 a %d!\n", numUsuario);
  }
  else
  {
    printf("Errou, era %d :(\n", randomNumber);
  }
  // printf("%d\n", randomNumber); // %d ou i% funcionam
  return 0;
}