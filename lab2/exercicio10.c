#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
};
typedef struct ponto Ponto;

void inc_dir(Ponto *p1){

    Ponto *a = NULL;
    a = (Ponto *) malloc (1 * sizeof(Ponto));

    if(a == NULL)
        printf("Erro!!");

    (*a).x = (p1->x + 1);
    (*a).y = (p1->y + 0);
    printf("\nP(%d,%d)\n",(*a).x, (*a).y);
    printf("anda 1 unidade leste:\n");
           
    (*a).x = p1->x - 1;
    (*a).y = p1->y - 0;
    printf("\nP(%d,%d)\n",(*a).x, (*a).y);
    printf("anda 1 unidade Oeste:\n");
              
    (*a).y = p1->y + 1;
    (*a).x = p1->y + 0;
    printf("\nP(%d,%d)\n",(*a).x, (*a).y);
    printf("Escolha 1 unidade Norte:\n");
                
    (*a).y = p1->y - 1;
    (*a).x = p1->x - 0;
    printf("\nP(%d,%d)\n",(*a).x, (*a).y);
    printf("Escolha 1 uma unidade Sul:\n");

    free(a); 
    a = NULL;    
}

int main(){
    Ponto a;

    a.x = 1;
    a.y = 2;

    printf("\n\nPonto (%d,%d)\n",a.x, a.y);
    
    inc_dir(&a);

    return 0;
}