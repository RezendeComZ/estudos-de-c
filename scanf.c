// Incluindo migué para escrever com espaço sem usar fgets

#include <stdio.h>

int main()
{
  char primeiroNome[20];
  char segundoNome[20];
  printf("Insira seus dois primeiros nomes: ");
  scanf("%s%s", primeiroNome, segundoNome); // Se você adicionar outro ele irá ignorar
  printf("Seu nome: %s %s\n", primeiroNome, segundoNome);
}