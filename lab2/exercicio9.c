#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
};
typedef struct ponto Ponto;

void multiplicacao(Ponto *a, int n){

    Ponto *p1 = NULL;
    p1 = (Ponto *) malloc(n * sizeof(Ponto));

    if(p1 == NULL)
        printf("Erro na alocacao!\n");

    (*p1).x = a->x * n;
    (*p1).y = a->y * n;

    printf("Novo Ponto: (%d,%d)\n",p1->x, p1->y);

   free(p1); 
   p1 = NULL;
}

int main(){
Ponto p;
int n;

    printf("Digite o ponto:\n");
    scanf("%d",&p.x);
    scanf("%d",&p.y);

    printf("Ponto antes da funcao: (%d,%d)\n",p.x, p.y);

    printf("Digite a constante: ");
    scanf("%d",&n);

    multiplicacao(&p,n);
    
    return 0;
}