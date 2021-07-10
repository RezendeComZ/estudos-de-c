#include <stdio.h>

int main()
{
	int x = 2 + 3 * 4 / 3 - 2; // ordem: * (3 * 4) / + -
	// por baixo dos panos: (2 + ((3 * 4) / 3) - 2
	int y = 5 % 2; // retorna 1 // remainder
	printf("Valor de x: %i\n", x);
	return 0;
}
