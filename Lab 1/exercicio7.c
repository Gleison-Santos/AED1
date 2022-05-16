#include <stdio.h>
/*
    Ao tentar executar o comando do fatorial de 15 a 10, ocorreu que estourou a capacidade de memória
    que um valor inteiro comporta.

*/
int main(){
    int i,n=15, fat=1;

     for(i=10;i>0;i--){
        fat = fat * i;
    }

    for(i=n;i>10;i--){
        fat = fat * i;
        printf("%d ",fat);
    }
    
    return 0;
}