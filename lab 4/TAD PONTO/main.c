#include <stdio.h>
#include "ponto.h"

int main(){
    Ponto *p1, *p2;
    int a, b, a1, b1, geta, getb, geta1, getb1;
    float dis;

    p1 = gera_pto();
    p2 = gera_pto();

    if(p1 == NULL || p2 == NULL){
        printf("Nao foi possivel criar os pontos!!\n");
        return -1;
    }
        
    printf("Digite os pontos:\n");

    printf("x1: ");
    scanf("%d",&a);

    printf("y1: ");
    scanf("%d",&b); 

    printf("x2: ");
    scanf("%d",&a1);

    printf("y2: ");
    scanf("%d",&b1);

    if(set_pto(p1, a, b) == 0){
        printf("Falha ao preencher os valores!!\n");
        return -1;
    }

    if(set_pto(p2, a1, b1) == 0){
        printf("Falha ao preencher os valores!!\n");
        return -1;
    }

    if(get_pto(p1, &geta, &getb) == 0){
        printf("Falha ao pegar os valores!!\n");
        return -1;
    }

    if(get_pto(p2, &geta1, &getb1) == 0){
        printf("Falha ao pegar os valores!!\n");
        return -1;
    }

    dis = Distancia_pto(p1, p2);

    if(Distancia_pto(p1, p2) == 0){
        printf("Falha ao calcular a distancia!!\n");
        return -1;
    }
    printf("Distancia entre dos pontos e: %.2f\n",dis);
    
    if(libera_pto(&p1) == 0){
        printf("Erro ao Liberar Ponteiro!!\n");
        return -1;
    }
    
    if(libera_pto(&p2) == 0){
        printf("Erro ao Liberar Ponteiro!!\n");
        return -1;
    }

    return 0;
}