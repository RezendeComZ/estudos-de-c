#include <stdio.h>

int main()

{
	char nome[31]; // null terminator
	printf("Qual é o seu nome?"); //Não funciona com espaços, tipo sobrenome
	scanf("%s", nome); // com array não precisa do &, como no int
	
	printf("oi %s\n", nome);
	return 0;
}
