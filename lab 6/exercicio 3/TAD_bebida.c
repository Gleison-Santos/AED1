#include <stdio.h>
#include <stdlib.h>
#include "TAD_bebida.h"
#include <string.h>

struct bebida{
    char nome[20];
    int volume;
    float preco;
};

struct no{
    struct bebida b;
    struct no *prox;
};

Lista cria_lista(){
    return NULL;
}
int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}
int insere_elem(Lista *lst, char *nome, int vol, float preco){

    Lista li = (Lista) malloc(sizeof(struct no));

    if(li == NULL)
        return 0;

    strcpy(li->b.nome,nome); 
    li->b.volume = vol; 
    li->b.preco = preco;
    li->prox = *lst; // aponta para primeiro no da lista
    *lst = li; // aponta para novo nó
    return 1;
}
int remove_elem(Lista *lst, char *nome){
    if(lista_vazia(*lst) == 1){
        return 0;
    }
    Lista aux = *lst; // ponteiro auxiliar para o primeiro nó
    //trata se o elemento está na primeira posição
    if(strcmp((*lst)->b.nome,nome) == 0){
        *lst = aux->prox; // apontando para segundo nó da lista
        free(aux);
        return 1;
    }
    //percorrendo a lista até achar o elemento ou até o final
    while(aux->prox !=NULL && strcmp(aux->prox->b.nome,nome) < 0){
        aux = aux->prox;
    }
        if(aux->prox==NULL)//final da lista
            return 0;
        Lista aux2 = aux->prox; //aponta para nó que deve ser removido
        aux->prox = aux2->prox;
        free(aux2);//remove elemento
        return 1;
}
void imprime(Lista lst){
    while(lst != NULL){
        printf("\n Lista: %s ", lst->b.nome);
        printf("\n %.2f  ", lst->b.preco);
        printf("\n %d\n", lst->b.volume);
        lst = lst->prox;
    }
}
