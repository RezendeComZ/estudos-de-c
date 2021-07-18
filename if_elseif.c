// Explicação de limpeza do input stream (i/o stream)

#include <stdio.h>

int main()
{
  int idade;
  printf("Qual é a sua idade? ");
  scanf("%i", &idade); // Aqui quando um número é digitado ele envia o número + \n, então ele fica com esse \n na memória. Então no próximo input ele vai passar direto usando \n, por isso usamos o getchar() para limpar. POREM, percebi que se eu preencher com uma letra (char) no lugar, ele continua passando direto.

  if (idade >= 18)
  {
    char quaoAdulto;
    printf("Você tem carteira de habilitação? (s/n) ");
    getchar(); // Aqui ele limpa o \n do input stream.
    scanf("%c", &quaoAdulto);

    if (quaoAdulto == 's' || quaoAdulto == 'S')
    {
      printf("Confesso que não faz muita diferença hoje em dia, ainda bem.\n");
    }
    else if (quaoAdulto == 'n' || quaoAdulto == 'N')
    {
      printf("Tá tudo bem, hoje em dia não é muito necessário mesmo.\n");
    }
    else if (quaoAdulto == 'y' || quaoAdulto == 'Y' || quaoAdulto == 'n' || quaoAdulto == 'N')
    {
      printf("You sabe english?\n");
    }
    else
    {
      printf("Não entendi.\n");
    }
  }
  else if (idade <= 12)
  {
    printf("Você ainda é criança.\n");
  }
  else
  {
    printf("Você ainda não fez 18 anos.\n");
  }
  return 0;
}