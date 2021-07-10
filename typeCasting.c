#include <stdio.h>

int main() {
	printf("Para entender que C é fortemente tipada\n");
	int slices = 17;
	int pessoas = 2;
	double halfThePizza = slices / (double) pessoas; // Se não sai um int com 'ponto', no caso aqui, 8.0
	//Daria para colocar slices / 2.0 ao invés de 2. Mas não daria para colocar pessoas.0, então temos que explicitar com (double) // não afeta a variável original
	printf("Half the Pizza: %f \n", halfThePizza);
	return 0;
}
