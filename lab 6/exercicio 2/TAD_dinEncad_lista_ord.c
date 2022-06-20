#include <stdio.h>
#include <stdlib.h>
#include "TAD_dinEncad_lista_ord.h"

struct no{
    int info;
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
int insere_ord(Lista *lst, int elem){

    Lista l = (Lista) malloc(sizeof(struct no));
    if(l == NULL)
        return 0;
   
    l->info = elem; // insere conteúdo 

    
    if(lista_vazia(*lst) || elem <= (*lst)->info){
        l->prox = *lst; // aponta para o primeiro nó
        *lst = l; // faz a lista apontar para o novo nó
        return 1;
    }
    Lista aux = *lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox; // avança

    l->prox = aux->prox;
    aux->prox = l;
    
        return 1; 
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(*lst) == 1 || elem < (*lst)->info)
        return 0;
    Lista aux = *lst; // ponteiro auxiliar para o primeiro nó
    //trata se o elemento está na primeira posição
    if(elem == (*lst)->info){
        *lst = aux->prox; // apontando para segundo nó da lista
        free(aux);
        return 1;
    }
    //percorrendo a lista até achar o elemento ou até o final
    while(aux->prox !=NULL && aux->prox->info <elem){
        aux = aux->prox;
    }    
        if(aux->prox==NULL || aux->prox->info >elem)//final da lista
            return 0;
        Lista aux2 = aux->prox; //aponta para nó que deve ser removido
        aux->prox = aux2->prox;
        free(aux2);//remove elemento
        return 1;
}
void imprime(Lista lst){
    if(lista_vazia(lst) == 1)
        printf("\nLista vazia!!!\n");
    while(lst != NULL){
        printf("\n Lista: %d ", lst->info);
        lst = lst->prox;
    }
}
