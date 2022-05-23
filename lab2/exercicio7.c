#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
};

typedef struct ponto Ponto;

int main(){

Ponto *p = NULL;
int i,tam;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d",&tam);

    p = (Ponto *) malloc (tam * sizeof(Ponto));

    for(i=0;i<tam;i++){
        printf("Entre com a coordenada x do ponto %d: ",i+1);
        scanf("%d",&p[i].x);

        printf("Entre com a coordenada Y do ponto %d: ",i+1);
        scanf("%d",&p[i].y);
    }

    printf("Pontos digitados: ");
    
    for(i=0;i<tam;i++){
        printf("(%d,%d); ",p[i].x, p[i].y);
    }
    free(p);
    p = NULL;

    return 0;
    
}