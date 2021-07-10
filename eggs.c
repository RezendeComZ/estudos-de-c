#include <stdio.h>

int main()
{	printf("Quantos ovos foram produzidos? ");
	int eggs;
	scanf("%i", &eggs);

	double duzias = (double) eggs / 12 ; // type casting
	printf("Foram produzidas %f duzias\n", duzias);
	return 0;
}
