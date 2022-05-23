#include <stdio.h>
#include <stdlib.h>

int main(){
int i, n,*p = NULL;

    printf("Qual a Quantidade: ");
        scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int));
    
    printf("Digite os numeros:\n");
    for(i=0;i<n;i++){
        printf("No %d: ",i+1);
        scanf("%d",&p[i]);
    }

    printf("Numeros Pares: ");
    for(i=0;i<n;i++){
        if(p[i] % 2 == 0){
            printf("%d ",p[i]);
        }
    }

    printf("\n");

    printf("Numeros Impares: ");
    for(i=0;i<n;i++){
        if(p[i] % 2 != 0){
            printf("%d ",p[i]);
        }
    }  

    free(p);
    p = NULL;

    return 0;
    
}