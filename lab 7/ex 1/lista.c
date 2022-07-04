#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    int info;
    struct no *prox;
};

Lista cria_lista(){
    Lista cab;

    cab = (Lista) malloc (sizeof(struct no));
    //coloca a lista no estado de vazia
    if(cab != NULL){
        cab->prox = NULL;
        cab->info = 0; // guarda a quantidade
    }
    return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;
    else    
        return 0;
}
int insere_elem(Lista lst, int elem){
    Lista N;

    N = (Lista) malloc (sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    N->prox = lst->prox;
    lst->prox = N;
    lst->info++;
    return 1;
}
int remove_elem(Lista *lst, int elem){
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = *lst; // ponteiro auxiliar para nó cabeçalho
    while(aux->prox !=NULL && aux->prox->info != elem)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;
    Lista aux2 = aux->prox;//aponta para nó a ser removido
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
    return 1;
}
void imprime_lista(Lista lst){
    int cont = 0;
    if(lista_vazia(lst) == 1){
        printf("\nNao existe elementos na lista!!!\n");
    }else{
        while(lst != NULL){
            if(cont == 0)
                printf("");
            else{
                printf("N: %d\n",lst->info);
            }
            cont++; 
            lst = lst->prox;        
        }
    }     
}