#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float v[5], soma=0, media=0, desvioPadrao,temp=0;

    printf("Digite 5 Numeros: \n");
    printf("<<Media e desvio-padrao>>\n");
    
    for(i=0;i<5;i++){
        printf("v[%d] ",i);
        scanf("%f",&v[i]);
        soma+= v[i];
    }
    media = soma/5.0;
    
    for(i=0;i<5;i++){
        temp = temp + pow((v[i] - media),2);
    }
    desvioPadrao = sqrt(temp/4.0);

    printf("A e media %f e o desvio padrao e %f\n",media,desvioPadrao);
    
    return 0;
}