#include <stdio.h>
#include <math.h>
int main(){
    int bit1, bit2, bit3, bit4, decimal;
    int b1,b2,b3,b4;
    printf("==Conversor de numeros binarios==");

    printf("\nDigite o 1o. bit: ");
    scanf("%d",&bit1);

    printf("Digite o 2o. bit: ");
    scanf("%d",&bit2);

    printf("Digite o 3o. bit: ");
    scanf("%d",&bit3);

    printf("Digite o 4o. bit: ");
    scanf("%d",&bit4);

    b1 = pow(2,0) * bit4;
    b2 = pow(2,1) * bit3;
    b3 = pow(2,2) * bit2;
    b4 = pow(2,3) * bit1;

    printf("O numero binario %d%d%d%d corresponden ao numero decimal %d\n",bit1, bit2, bit3, bit4, decimal = (b1+b2+b3+b4));

    return 0;
}
