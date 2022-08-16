typedef struct pilha *Pilha;
Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int empilha (Pilha p, int elem);
void converte(Pilha p, int elem);
void imprime(Pilha p);