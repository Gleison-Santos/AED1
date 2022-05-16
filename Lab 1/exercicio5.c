#include <stdio.h>

int main(){
    int i,j,n,m=0,cont=1;

    printf("Entre com um numero: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       for(j=0;j<=m;j++){
           printf("%d ",cont);
           cont++;
        }
       printf("\n");
       m++;
    }
    
    return 0;
}