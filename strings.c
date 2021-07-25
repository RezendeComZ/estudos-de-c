// String é um array de caracteres
// Null character representa o fim da string: \0
// Também pegamos o comprimento do array

#include <stdio.h>
#include <string.h> // só para usar o strlen() no finalzinho, antes de usar fiz uma solução "manual"

int main()
{
  char ola[] = "hello";   // teoricamente o eu deveria colocar char[6], para caber o "hello" e a caractere null, mas o compilador vai fazer isso por mim, e eu não vou correr risco de associar um valor do tamanho incorreto // nesse caso char será um array com 6 items, e o null character será o [5]
  printf("%c\n", ola[1]); // e

  printf("Qual é a sua comida predileta? ");
  char comidaFav[50];       // para garantir que caiba bastante coisa, lembrando que o último caractere (49) será para o null (\0)
  scanf("%49s", comidaFav); // 49 para ele só pegar até ai (vai dar crop no resto), para não correr o risco de sobrescrever o null // Não precisa usar o "&" nesse caso, tem a ver com "decay"
  printf("%s\n", comidaFav);

  // Medindo o array (length)
  int charCount = 0;
  while (comidaFav[charCount] != '\0')
  {
    charCount++;
  }
  printf("Número de caracteres da comida favorita: %d\n", charCount);

  int contadorComidaFav = strlen(comidaFav);
  printf("Número de caracteres da comida favorita usando strlen: %d\n", contadorComidaFav);

  return 0;
}