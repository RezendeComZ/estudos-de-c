#include <stdio.h>

int main()
{
	int radius;
	printf("Qual é o diametro? ");
	scanf("%i", &radius);
	double area = 3.14159 * (radius * radius);
	printf("The magic number is: %f\n", area);
	return 0;
}

