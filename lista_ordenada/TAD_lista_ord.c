#include <stdio.h.>
#include <stdlib.h>
#include "TAD_lista_ord.h"
#define MAX 3

struct lista{
    int no[MAX];
    int fim;
};

Lista cria_lista(){
    Lista lst;

    lst = (Lista) malloc(sizeof(struct lista));
    if(lst != NULL)
        lst->fim = 0;
    return lst;
}

int lista_vazia(Lista lst){
    if(lst->fim == 0)
        return 1;
    else
        return 0;
}

int lista_cheia(Lista lst){
    if(lst->fim == MAX)
        return 1;
    else    
        return 0;
}

int insere_ord(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;

    if(lista_vazia(lst) == 1 || elem >= lst->no[lst->fim-1]) // verifica se o elemento é maior ou igual ao último da lista 
        lst->no[lst->fim] = elem; // insere na ultima posicao
    else{
        int i, aux = 0;
        while(elem >= lst->no[aux]) // percorre até achar um elemento menor ou até o fim da lista
            aux++;
        for(i = lst->fim; i > aux ; i--) //desloca os elementos a direita para inserir na posição 
            lst->no[i] = lst->no[i-1];
        lst->no[aux] = elem;
    }

    lst->fim++;
        return 1;
}

int remove_ord(Lista lst , int elem){
    if(lst == NULL || lista_vazia(lst) == 1 || elem < lst->no[0] || elem > lst->no[lst->fim-1]) // verifica se o elemento está na lista
        return 0;
    int i, aux = 0;
    while(aux < lst->fim && lst->no[aux] < elem )// percorre a lista até achar um nó maior ou o final da lista
        aux++;
    if(aux == lst->fim || lst->no[aux] > elem) // elemento não está na lista
        return 0;
    for(i=aux+1;i < lst->fim; i++)
        lst->no[i-1] = lst->no[i];
    lst->fim--;
        return 1;
}
void imprime_lista(Lista lst){
    int i;

    if(lst == NULL || lista_vazia(lst) == 1)
        printf("Erro ao imprimir lista!!!\n");

    for(i = 0; i < lst->fim ; i++){
        printf("%d\n",lst->no[i]);
    }
}