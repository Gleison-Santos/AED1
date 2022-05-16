#include <stdio.h>
#include <math.h>

int main(){
    float x1=0, y1=0, distancia;
    float x, y,temp1, temp2;

    printf("<<Distancia>>");

    printf("\nEntre com a coordenada de x: ");
    scanf("%f",&x);

    printf("Entre com a coordenada de y: ");
    scanf("%f",&y);

    temp1 = (x1-x)*(x1-x);
    temp2 = (y1-y)*(y1-y);

    distancia = sqrt((temp1+temp2));
    printf("A distancia entre os pontos (3,4) e (0,0) eh %.1f\n",distancia);


    return 0;
}
