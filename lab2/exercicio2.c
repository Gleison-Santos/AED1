#include <stdio.h>

int main(){
char nome[13] = {'J','o','s','e','\0','A','u','g','u','s','t','o','\0'};
int i;

for(i=0;i<13;i++){
    printf("%c ",nome[i]);
}
    return 0;
}