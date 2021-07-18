#include <stdio.h>

int main()
{
  double money = 20;
  double cost = 25;

  double ternario = money >= cost ? 200 : 2; // ternário na declaração de variável, nada de relevante aqui.

  printf("Saldo do 'ternario': %f\n", ternario); // nenhuma conta relevante, nem nada demais.

  // No exemplo a seguir note que não se usa semi-colon no meio do ternário, só no final.
  money <= cost ? printf("Custa mais do que você pode pagar.\n") : printf("Beleza, você tem condições.\n");
  return 0;
}