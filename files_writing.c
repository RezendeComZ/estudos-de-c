#include <stdio.h>
// #include <stdlib.h>

int main()
{
  // FILE é quase um datatype (ou é):
  FILE *fpointer = fopen("files_Arquivo_pointer.txt", "w"); // Cria o arquivo // Da para colocar o endereço mais preciso ex: C:/Documentos // "w" é de write // "a" é append  // "r" é read // Não precisa ser txt, pode ser html, css ou qualquer outro
  fprintf(fpointer, "Olá!\nTudo bem?\n");                   // Escreve no arquivo
  fprintf(fpointer, "aaaaaa\n");                            // Também escreve no arquivo, sem apagar o que  estava lá
  fclose(fpointer);                                         // Fecha o arquivo, remove da memória

  return 0;
}