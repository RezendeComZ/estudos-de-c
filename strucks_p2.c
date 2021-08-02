#include <stdio.h>
#include <string.h> // pra usar strcpy()

struct Estudante
{
  char nome[50];
  int idade;
  double nota;
};

int main()
{
  struct Estudante estudante1;
  estudante1.idade = 31;
  estudante1.nota = 8.8;
  strcpy(estudante1.nome, "Gabriel"); // Não dá para fazer do mesmo jeito dos tipos de dados, porque string é um array

  printf("%f\n", estudante1.nota);

  return 0;
}