#include <stdio.h>

int main() {
	printf("Para entender que C é fortemente tipada\n");
	int slices = 17;
	int pessoas = 2;
	double halfThePizza = slices / (double) pessoas; // Se não sai um int com 'ponto', no caso aqui, 8.0
	//Daria para colocar slices / 2.0 ao invés de 2. Mas não daria para colocar pessoas.0, então temos que explicitar com (double) // não afeta a variável original
	// type casting tem mais precedencia do que divisão, por isso está no segundo valor
	printf("Half the Pizza: %f \n", halfThePizza);
	double c = 25/2 * 2;
	double d = 25/2 * 2.0;
	double e = 25/2.0 * 2;
	
	printf("c: %f\n", c); // 24.000000
	printf("d: %f\n", d); // 24.00000
	printf("e: %f\n", e); // 12.50000 * 2 = 25.00000	
	return 0;
}
