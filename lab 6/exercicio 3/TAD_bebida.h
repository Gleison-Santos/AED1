typedef struct no *Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int insere_elem(Lista *lst, char *nome, int vol, float preco);
int remove_elem(Lista *lst, char *nome);
void imprime(Lista lst);