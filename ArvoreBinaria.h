typedef struct NO *ArvBin;

ArvBin *cria_ArvBin();
void libera_ArvBin(ArvBin *raiz);
int insere_ArvBin(ArvBin *raiz, int valor);
int remove_ArvBin(ArvBin *raiz, int valor);
int estaVazia_ArvBin(ArvBin *raiz);
int altura_ArvBin(ArvBin *raiz);
int totalNO_ArvBin(ArvBin *raiz);
void emOrdem_ArvBin(ArvBin *raiz);

// implementações a serem realizadas
int consulta_ArvBin(
    ArvBin *raiz, int valor); // retorna 1 se encontrar e zero em caso contrário
void preOrdem_ArvBin(ArvBin *raiz);
void posOrdem_ArvBin(ArvBin *raiz);
int menor_ArvBin(ArvBin *raiz);  // retorna o menor valor ou zero
int maior_ArvBin(ArvBin *raiz);  // retorna o maior valor ou zero
int folhas_ArvBin(ArvBin *raiz); // conta a quantidade de folhas da árvore
