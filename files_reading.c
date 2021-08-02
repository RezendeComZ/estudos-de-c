#include <stdio.h>

int main()
{
  char linha[255];

  FILE *fpointer = fopen("files_Arquivo_pointer.txt", "r");

  fgets(linha, 255, fpointer); // armazena a primeira linha do arquivo dentro de "linha" e incrementa o fpointer
  printf("Primeira linha do arquivo: %s", linha);
  fgets(linha, 255, fpointer);
  printf("Segunda linha do arquivo: %s", linha);

  fclose(fpointer);

  return 0;
}