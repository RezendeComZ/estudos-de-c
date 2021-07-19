// FOR

#include <stdio.h>

// initialization // I
// comparison // SEE
// update // YOU

int main()
{
  int i; // estou declarando do lado de fora do FOR pq quero usar o escopo global.
  for (i = 1; i <= 10; i++)
  {
    if (i < 10)
    {
      printf("E é %i,\n", i);
    }
    else
    {
      printf("E é %i!\n", i); // Útlimo do loop, 10.
    }
  }

  printf("Fora do FOR: acabou em: %d/n", i); // 11

  return 0;
}