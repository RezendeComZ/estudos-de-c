#include <stdio.h>

int main()
{
	int money = 25;
	int bill = 15;
	
	int total = money - -bill; // 25 + 15 // pq bill está negativado
	printf("%i\n", total); // unary minus

	// 25 + +15 // unaryPlus	
	return 0;
}
