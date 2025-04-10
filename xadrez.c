#include <stdio.h>

int main()
{
  // Definição do número de casas que cada peça pode se mover
  int numCasasTorre = 5;
  int numCasasBispo = 8;
  int numCasasRainha = 8;

  // Movimento da Torre
  printf("\nTorre: \n");
  int contadorTorre = 1;
  while (contadorTorre <= numCasasTorre) // Enquanto o contador for menor ou igual ao número de casas
  {
    printf("\ndireita\n"); // Exibe a direção do movimento da Torre
    contadorTorre++;       // Incrementa o contador
  }

  printf("\n=============================\n");

  // Movimento do Bispo
  printf("\nBispo: \n");
  for (int i = 0; i < numCasasBispo; i++) // Laço que se repete conforme o número de casas do Bispo
  {
    printf("\nDireita, Cima\n"); // Exibe a direção do movimento do Bispo
  }

  printf("\n=============================\n");

  // Movimento da Rainha
  printf("Rainha: ");
  int contadorRainha = 0;
  do
  {
    printf("\nesquerda\n"); // Exibe a direção do movimento da Rainha
    contadorRainha++;       // Incrementa o contador
  } while (contadorRainha <= numCasasRainha); // Executa pelo menos uma vez e continua enquanto a condição for verdadeira

  return 0;
}
