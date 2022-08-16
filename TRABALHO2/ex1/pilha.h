typedef struct pilha *Pilha;
Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int empilha(Pilha p, int elem);
int desempilha(Pilha p, int *elem);
int le_topo(Pilha p, int *elem);
void imprime(Pilha p);
int palindromo(Pilha p);
int elimina(Pilha p, int elem);
void Pares_e_impares(Pilha p);



