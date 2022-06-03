#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include <math.h>

struct ponto{
    int x, y;
    double dist;
};

Ponto * gera_pto(){ // cria ponto
    Ponto *p;
    p = (Ponto *) malloc(sizeof(Ponto));
    
    if(p!=NULL)
        return p;
}

int set_pto(Ponto *p, int a, int b){ //insere valores no ponto

    if(p != NULL){
        p->x = a;
        p->y = b;
        return 1;
    }
        return 0;
}

int get_pto(Ponto *p, int *a, int *b){// pega valores no ponto 
    if(p != NULL){
        *a = p->x;
        *b = p->y;
        return 1;
    }
        return 0;
}

float Distancia_pto(Ponto *p1, Ponto *p2){ // calcula a distancia entre dois pontos
    float distancia;

    if( p1 != NULL || p2 != NULL)
        distancia = sqrt((pow((p2->x - p1->x),2) + pow((p2->y - p1->y),2)));

    return distancia;
}

void libera_pto(Ponto **p){// libera ponto
    free(*p);
    *p = NULL;
}

