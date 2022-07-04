#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_bebidas.h"

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
    Lista cab;

    cab = (Lista) malloc (sizeof(struct no));
    //coloca a lista no estado de vazia
    if(cab != NULL){
        cab->prox = NULL;
    }
    return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;
    else    
        return 0;
}
int insere_elem(Lista lst, char * nome, int volume, float preco){
    Lista N;

    N = (Lista) malloc (sizeof(struct no));
    if(N == NULL)
        return 0;
    strcpy(N->b.nome, nome);
    N->b.preco = preco;
    N->b.volume = volume;
    N->prox = lst->prox;
    lst->prox = N;
    return 1;
}
int remove_elem(Lista *lst, char *nome){
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = *lst; // ponteiro auxiliar para nó cabeçalho
    while(aux->prox !=NULL && strcmp(aux->prox->b.nome,nome) > 0)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;
    Lista aux2 = aux->prox;//aponta para nó a ser removido
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}
void imprime_lista(Lista lst){
    int i=0;
    if(lista_vazia(lst) == 1){
        printf("\nNao existe elementos na lista!!!\n");
    }else{
        for(lst;lst != NULL;lst = lst->prox){
            if(i==0)
                printf("");
            else{
                 printf("Nome: %s\n",lst->b.nome);
                printf("Volume: %d\n",lst->b.volume);
                printf("Preco: %.2f\n",lst->b.preco); 
            }i++;
        }
   }  
}
