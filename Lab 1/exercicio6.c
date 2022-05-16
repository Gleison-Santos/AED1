#include <stdio.h>

int main(){
    int i=0,n=10, fat=1;

    for(i=n;i>0;i--){
        fat = fat * i;
    }
    printf("Valor fatorail: %d ",fat);
    return 0;
}