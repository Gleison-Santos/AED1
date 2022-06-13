#include <stdio.h>
#include "lista_nao_ord.h"
#include <stdlib.h>
#define MAX 20


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

int insere_elem(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    lst->no[lst->fim] = elem;
    lst->fim++;
        return 1;
}

int remove_elem(Lista lst , int elem){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int i, aux = 0;

    while(aux < lst->fim && lst->no[aux] != elem){ //percorre a lista até achar o elemento ou ser o fim da lista
        aux++;
    }
    if(aux == lst->fim)
        return 0;

    for(i = aux+1;i < lst->fim;i++) // faz o sucessor de aux até o fim, deslocar para esquerda. 
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
