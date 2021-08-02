#include <stdio.h>

// int calc(int n1, char op, int n2)
// {
//   int resultado = n1 & op n2;
//   return resultado;
// }

int main()
{
  double num1;
  double num2;
  char op;

  printf("Insira o primeiro número: ");
  scanf("%lf", &num1);
  printf("Qual será a operação? ");
  scanf(" %c", &op); // precisa do espaço antes de '%c' // se não ele pula para o próximo scanf()
  printf("Insira o segundo número: ");
  scanf("%lf", &num2);
  if (op == '+')
  {
    printf("%f", num1 + num2);
  }
  else if (op == '-')
  {
    printf("%f", num1 - num2);
  }
  else if (op == '*')
  {
    printf("%f", num1 * num2);
  }
  else if (op == '/')
  {
    printf("%f", num1 / num2);
  }
  else
  {
    printf("Operação '%c' não encontrada.", op);
  }
  printf("\n");
}