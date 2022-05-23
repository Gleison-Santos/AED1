#include <stdio.h>
#include <stdlib.h>

int * aloca_inteiro(int n){
    
    int *p = NULL;
    int i;

    p = (int*)malloc(n * sizeof(int));

    if(p==NULL)
        printf("Erro na alocacao\n");

    for(i=0;i<n;i++){
        p[i]= 0;
    }

    return p;

    free(p);
    p = NULL;
}

void imprime_vet(int *p,int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d ",p[i]);
    }
}

int main(){

    int *p1;
    int i, n=10;

    p1 = aloca_inteiro(10);
    imprime_vet(p1,n);

    free(p1);
    p1 = NULL;

    return 0;
}