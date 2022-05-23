#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x, *numeros = NULL;

    printf("Entre com a quantidade: ");
    scanf("%d",&x);

    numeros = (int *) malloc(x* sizeof(int));

    printf("Digite os numeros:\n");
    for(i=0;i<x;i++){
        scanf("%d",&numeros[i]);
    }
    for(i=0;i<x;i++){
        printf("N: %d\n",numeros[i]);
    }
    free(numeros);
    numeros = NULL;

    return 0;
    
}