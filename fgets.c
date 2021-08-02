// Um jeito de pegar strings do usuário, scanf pega só a primeira string antes do espaço
// fonte: https://youtu.be/KJgsSFOSQv0?t=4248

#include <stdio.h>

int main()
{
  char nome[50];
  printf("Qual é o seu nome completo? ");
  fgets(nome, 50, stdin);
  printf("Seu nome é: %s.\n", nome); // detalhe que ele adiciona uma nova linha no final de "nome"
}