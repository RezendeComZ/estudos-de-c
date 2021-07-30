#include <stdio.h>
// Declarando struck:
struct retangulo
{
  int largura;
  int comprimento;
};

// typedef: // Pra mostrar a mesma coisa
typedef struct retanguloDois
{
  int largura;
  int comprimento;
} retanguloDois;

int main()
{
  struct retangulo meuRetangulo = {5, 10};
  printf("Comprimento: %d.\nLargura: %d.\n", meuRetangulo.comprimento, meuRetangulo.largura);

  //
  printf("\n\n");
  retanguloDois meuOutroRetangulo = {2, 3}; // typedef faz com que eu não precise usar "struck" aqui na frente
  printf("Comprimento: %d.\nLargura: %d.\n", meuOutroRetangulo.comprimento, meuOutroRetangulo.largura);
  return 0;
}