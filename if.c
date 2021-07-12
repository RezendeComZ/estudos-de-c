#include <stdio.h>
#include <stdbool.h> // pra usar bool

int main()
{
  int age = 31;
  if (age > 40)
  {
    printf("Idade maior que 40\n");
  }
  else
  {
    printf("Idade menor que 40\n");
  }

  // bool
  bool pizzaIsHeathy = true;
  int temp;
  printf("Pizza é saudável? 1 para sim e 0 para não: ");
  scanf("%d", &temp); // %d pra forçar int
  pizzaIsHeathy = temp;
  if (pizzaIsHeathy) // 0 é false e acima de 0 é true
  {
    printf("Pizza é saudável\n");
  }
  else
  {
    printf("Pizza não é saudável\n");
  }
  return 0;
}