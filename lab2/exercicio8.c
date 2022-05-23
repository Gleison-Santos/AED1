#include <stdio.h>

struct ponto{
    int x;
    int y;
};
typedef struct ponto Ponto;

int calc_area(Ponto p1, Ponto p2){

int area; 

     area = (( p2.x - p1.x ) * ( p2.y  - p1.y ));

     if(area <0){
         area *= -1;
         return area;
     }else
        return area;
}

int main(){

int i=0;
Ponto p1, p2;

    printf("Entre com os valores:\n"); 
    printf("x%d: ",i+1);
    scanf("%d",&p1.x);

    printf("y%d: ",i+1);
    scanf("%d",&p1.y);

    printf("x%d: ",i+2);
    scanf("%d",&p2.x);

    printf("y%d: ",i+2);
    scanf("%d",&p2.y);

    printf("Area do retangulo definida por: %d\n", calc_area(p1, p2));

    return 0;
}