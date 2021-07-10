#include <stdio.h>

int main()
{
	int pizzasToEat = 100;
	// pizzasToEat++; // unary
	// pizzasToEat--;
	// pizzasToEat += 100;
	// pizzasToEat -= 20;
	// pizzasToEat *= 2;
	// pizzasToEat /= 2;
	// pizzasToEat %= 2;

	int output = pizzasToEat++; // Retorna 100! Não 101 //pq o ++ é executado depois da variável ser lida // Mas o ++ foi executado em pizzasToEat
	output = ++pizzasToEat; // aqui já vira 102
	
	printf("%i \n", output);
	return 0;
}
