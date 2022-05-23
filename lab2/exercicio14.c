#include <stdio.h>
#include <stdlib.h>

double* to_double(int *v, int tam){
    int i;
    double *vetor;

    vetor = (double *) malloc (tam * sizeof(double));
    if(vetor == NULL)
        printf("Erro na alocacao\n");

   

    for(i=0;i<tam;i++){
        vetor[i] = v[i];
    }

    return vetor;

    free(vetor);
    vetor = NULL;
}

int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    double *vet_double;

    vet_double = to_double(vet, 10);
    

    for(i=0;i<10;i++){
        printf("%lf ",vet_double[i]);
    }

    return 0;
}