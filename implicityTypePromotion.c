#include <stdio.h>

int main() {
	// impicity type promotion - promotion
	
	float x = 50.0; // poderia ser 50.0f, mas já tá implícito
	double y = 50.0f; // f é indica que um float está dentro de um double // melhor não usar para nao perder dados
	
	printf("%f", x ); // printf promove x de flot para double, sem alterar a variavel // %f tbm serve para double
	return 0;
}
