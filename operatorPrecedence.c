// https://en.cppreference.com/w/c/language/operator_precedence
// da pra colocar entre paranteses pra visualizar mais fácil ou "forçar"

#include <stdio.h>

int main()
{
	// Operator precendece
	// * / + -
	// ver site comentado no topo
	
	int x, y;
	x = y = 5; // y = 5, dps x = y

	int z = 20;
	y = 2;
	x = -y + z; // x = (-y) + z // x = 18

	printf("%i\n", x); 	
	return 0;
}
