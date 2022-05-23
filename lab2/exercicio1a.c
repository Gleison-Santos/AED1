#include <stdio.h>

int main(){
    
    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40;
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o  conteúdo inicial é lixo;
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a
    int x;

    //exercicio (a)
    printf("\n");
    printf("Endereco de A: %d \n", &a);
    printf("Endereco de A: %d \n", p);

    printf("\n");

    //exercicio (b)
    printf("A: %d\n",*p);

    printf("Digite novo valor para a: ");
    scanf("%d",p);

    printf("A: %d\n",*p);
    return 0;
}