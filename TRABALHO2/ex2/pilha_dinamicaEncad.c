#include <stdio.h>
#include <stdlib.h>
#include "pilha_dinamicaEncad.h"
#include <string.h>

struct no{
    int info;
    struct no*prox;
};

Pilha cria_pilha(){
    return NULL;
}
int pilha_vazia(Pilha p){
    if(p == NULL)
        return 1;
    else
        return 0;
}
int empilha(Pilha *p, int elem){
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}
int desempilha(Pilha *p, int *elem){
    if(pilha_vazia(*p) == 1)
        return 0;
    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}
int le_topo(Pilha *p, int *elem){
    if(pilha_vazia(*p) == 1)
        return 0;
    Pilha aux = *p;
    *elem = aux->info;
    return 1;
}
void imprime(Pilha p){
    int i;
    
    if(p == NULL || pilha_vazia(p) == 1)
        printf("\nPilha vazia\n");
    while(p!= NULL){
        printf("\n%d ",p->info);
       p = p->prox;
    }
}

int palindromo(char * vet){
    int tam, metade, elem;
    Pilha p = cria_pilha();
    tam = strlen(vet);
    metade = tam/2;
    int i;

    for(i=0;i < metade;i++){
        empilha(&p,vet[i]);
    } 
    if(tam % 2 != 0)
            i++;
    while(vet[i] != '\0'){
        desempilha(&p, &elem);
        if(elem != vet[i])
            return 0;
        i++;
    }
    return 1;
}
int elimina(Pilha *p, int elem){
    Pilha aux = cria_pilha();
    int i,j=1,  elemento;
    if(p == NULL || aux == NULL || pilha_vazia(*p) == 1)
        return 0;

    do
    {
        if((*p) == NULL)
            j=0;
        (*p) = (*p)->prox;
        
    } while ((*p)->info == elem);
    if(j==1){
        while((*p)->info != elem){
        empilha(&aux, (*p)->info);
        desempilha(&(*p),&elemento);
    }
    desempilha(&(*p),&elemento);
    for(aux; aux != NULL; aux = aux->prox) // Passando os elementos da pilha aux para pilha p.
        empilha(&(*p),aux->info);
    return 1;
    }
    else 
    return 0;
}
void Pares_e_impares(Pilha p){
    Pilha aux = cria_pilha();
    Pilha aux2 = cria_pilha();

    if(p == NULL || aux == NULL || aux2 == NULL || pilha_vazia(p) == 1)
        printf("\nErro\n");

    while(p!= NULL){
        if(p->info % 2 == 0){
            empilha(&aux,p->info);
        }
        else{
            empilha(&aux2,p->info);
        }
       p = p->prox;
    }
    imprime(aux);
    imprime(aux2);
    
}
