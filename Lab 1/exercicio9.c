#include <stdio.h>

int main(){
    char nome[10];
    int i=0;

    printf("Digite um nome: ");
    
        setbuf(stdin,NULL);
        gets(nome);

    while(nome[i]!='\0'){
        nome[i] = nome[i]-32;
        i++;
    }

    printf("nome: %s\n",nome);
    return 0;

}