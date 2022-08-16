#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define MAX 20
struct pilha
{
    int no[MAX];
    int topo;
};
Pilha cria_pilha()
{
    Pilha p;
    p = (Pilha)malloc(sizeof(struct pilha));
    if (p != NULL)
        p->topo = -1;
    return p;
}
int pilha_vazia(Pilha p)
{
    if (p->topo == -1)
        return 1;
    else
        return 0;
}
int pilha_cheia(Pilha p)
{
    if (p->topo == MAX - 1)
        return 1;
    else
        return 0;
}
int empilha(Pilha p, int elem)
{
    if (p == NULL || pilha_cheia(p) == 1)
        return 0;

    p->topo++;
    p->no[p->topo] = elem;
    return 1;
}
int desempilha(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p) == 1)
        return 0;
    *elem = p->no[p->topo];
    p->topo--;
    return 1;
}
int le_topo(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p) == 1)
        return 0;
    *elem = p->no[p->topo];
    return 1;
}
void imprime(Pilha p){
    int i;
    
    if(p == NULL || pilha_vazia(p) == 1)
        printf("\nPilha vazia\n");
    for(i = 0; i <= p->topo; i++){
        printf("%d ",p->no[i]);
    }
}
int palindromo(Pilha p){
    int i = 0, j = 0;
    if(p == NULL || pilha_vazia(p) == 1)
        return 0;
    for(i = 0; i <= p->topo; i++)
        for(p->topo ; i >= 0; i--)
            if(p->no[i] == p->no[j])
                return 1;
            else
                return 0;
}
int elimina(Pilha p, int elem){
    Pilha aux = cria_pilha();
    int i;
    if(p == NULL || aux == NULL || pilha_vazia(p) == 1)
        return 0;

    while(p->no[p->topo] != elem){
        empilha(aux, p->no[p->topo]);
        desempilha(p,&p->no[p->topo]);
    }
    p->topo--;
    for(i = aux->topo; i >= 0; i--) // Passando os elementos da pilha aux para pilha p.
        empilha(p,aux->no[i]);
    return 1;
}
void Pares_e_impares(Pilha p){
    Pilha aux = cria_pilha();
    Pilha aux2 = cria_pilha();

    if(p == NULL || aux == NULL || pilha_vazia(p) == 1)
        printf("\nErro\n");
    int i;

    for( i = 0; i <= p->topo; i++){
        if(p->no[i] % 2 == 0)
            empilha(aux,p->no[i]);
        else
            empilha(aux2,p->no[i]);
    }
    imprime(aux);//imprime pares
    printf("\n");
    imprime(aux2);//imprime impares
}