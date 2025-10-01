#include "ArvoreBinaria.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// Ex: typedefs, fun��es como cria_ArvBin(), insere_ArvBin(), etc.
int main() {
  setlocale(LC_ALL, "");

  int N = 8, dados[8] = {50, 100, 30, 20, 40, 45, 35, 37};

  ArvBin *raiz = cria_ArvBin();

  for (int i = 0; i < N; i++)
    insere_ArvBin(raiz, dados[i]);

  printf("Pesquisa em Ordem\n");
  emOrdem_ArvBin(raiz);

  printf("\nPesquisa em Pr� Ordem\n");
  preOrdem_ArvBin(raiz);

  printf("\nPesquisa em P�s Ordem\n");
  posOrdem_ArvBin(raiz);

  printf("\nAltura da �rvore = %d\n", altura_ArvBin(raiz));

  printf("\nN� de maior valor = %d\n", maior_ArvBin(raiz));

  printf("\nN� de menor valor = %d\n", menor_ArvBin(raiz));

  printf("\nQuantidade de folhas = %d\n", folhas_ArvBin(raiz));

  libera_ArvBin(raiz);

  return 0;

  libera_ArvBin(raiz);

  return 0;
}
