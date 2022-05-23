#include <stdio.h>

int main(){

double vet[10] = {1,2,3,4,5,6,7,8,9,10};
int i;

for(i=0;i<10;i++)
    printf("%lf ",*(vet+i));
    
printf("\n");
    return 0;
}