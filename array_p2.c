#include <stdio.h>

int main()
{
  int minhasNotas[5]; // 4 espaços disponíveis, o último é o terminador // Na inicialização mostramos o tamanho
  minhasNotas[4] = 8;
  minhasNotas[3] = 6;
  printf("Minhas notas: %d\n", minhasNotas[4]); // 8

  int outrasNotas[] = {5, 3, 6, 8, 10};                // outra maneira de declarar, mais clara e não temos que ficar pensando no terminador // o compilador que vai determinar o tamanho
  int outrasNotasTamanho = 5;                          // pra manter o controle do tamanho do array
  printf("Minhas outras notas: %d\n", outrasNotas[2]); // 6 // Aqui é a mesma coisa do print de cima, mas o array está declarado de outra forma

  int somaNotas = minhasNotas[4] + outrasNotas[2] + 1; // 8 + 6 + 1 // 15
  printf("somaNotas: %d\n", somaNotas);

  // Imprimindo tudo com loop
  for (int i = 0; i < outrasNotasTamanho; i++)
  {
    printf("outras notas: %i\n", outrasNotas[i]);
  }
}