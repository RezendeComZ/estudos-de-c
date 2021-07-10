#include <stdio.h>

int main()
{
	char ASCII; // Com char sempre usamos aspas simples // 'A' // 65
	printf("Por favor, digite um caractere: ");
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);
	
	int inteiro;
	printf("Por favor, digite um número inteiro entre 0 e 127: ");
	scanf("%i", &inteiro);
	printf("%c\n", inteiro);
	
	// Matemática com char
	char somaChar = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", somaChar, somaChar);
	return 0;
}
