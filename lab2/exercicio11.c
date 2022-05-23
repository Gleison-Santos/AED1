#include <stdio.h>
#include <stdlib.h>

typedef struct valor{
    double menor;
    double maior;
}Valor;

Valor maior_menor(double *vet, int n){
    int i=0;
    Valor resultado;

    resultado.menor = vet[0];
    resultado.maior = vet[0];

    for(i=1;i<n;i++){
        if(vet[i] < resultado.menor){
             resultado.menor = vet[i];
        }
        if(vet[i] > resultado.maior){
            resultado.maior = vet[i];
        }
    }

    return resultado; //retorna strutura
}

int main(){

    double v[5] = {10, -4, 0, 30, 5};
    Valor res;
    int i;

    printf("\n");
    for(i=0;i<5;i++){
        printf("%f ",v[i]);
    }
    
    res = maior_menor(v,5);//recebendo estrutura

    printf("\n\nMenor: %lf\nMaior: %lf\n", res.menor, res.maior);
    
    return 0;
}