// hipotenusa
#include <stdio.h>
#include <math.h> // sqrt

int main()
{
  double a;
  double b;
  double c;

  printf("Qual é valor de A? ");
  scanf("%lf", &a);

  printf("Qual é o valor de B? ");
  scanf("%lf", &b);

  c = sqrt(a * a + b * b);
  printf("A hipotenusa é: %lf\n", c);
  return 0;
}