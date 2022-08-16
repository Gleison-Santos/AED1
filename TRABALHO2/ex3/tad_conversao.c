#include <stdio.h>
#include <stdlib.h>
#include "tad_conversao.h"
#define MAX 10

struct pilha{
    int no[MAX];
    int topo;
};

Pilha cria_pilha(){
    Pilha p = (Pilha)malloc (sizeof(struct pilha));

    if(p != NULL)
        p->topo = -1;
    return p;
}
int pilha_vazia(Pilha p){
    if(p->topo == -1)
        return 1;
    else
        return 0;
}
int pilha_cheia(Pilha p){
    if(p->topo == MAX-1)
        return 1;
    else 
        return 0;
}
int empilha (Pilha p, int elem){
    if(p == NULL || pilha_cheia(p) == 1)
        return 0;
    
        p->topo++;
        p->no[p->topo] = elem;
        return 1;  
}
void converte(Pilha p, int elem){
    int resto, resultado;
    if(p == NULL)
        printf("\nErro\n");

    resultado = elem;
    while(resultado != 0){
        resto = resultado % 2;
        empilha(p,resto);
        resultado = resultado / 2;
    }
    imprime(p);
}
void imprime(Pilha p){
    int i;
    if(p == NULL || pilha_vazia(p) == 1)
        printf("\nErro\n");
    for(i=p->topo; i >=0; i--){
        printf("\n%d ",p->no[i]);
    }
}
