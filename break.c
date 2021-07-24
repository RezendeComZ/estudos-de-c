// Outro exemplo com break fora do SWITCH
#include <stdio.h>

int main()
{
  for (int i = 0; i < 60; i++)
  {
    printf("Olá!\n");
    // if (i > 5) break; // O jeito mais bonito e certo de ver, mas o VSCode "corrige" para o jeito de que está em baixo ao salvar
    if (i > 5)
      break;
  }

  return 0;
}