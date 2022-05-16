#include <stdio.h>

int main(){
    float premio,somaApostas,valorTotal, ganhador1, ganhador2, ganhador3;
    float jogador1, jogador2, jogador3;

    printf("Digite o valor da aposta: \n");
    printf("\n<<Loteria>>\n");

    printf("Bolao jogador 1: ");
    scanf("%f",&jogador1);

    printf("Bolao jogador 2: ");
    scanf("%f",&jogador2);

    printf("Bolao jogador 3: ");
    scanf("%f",&jogador3);

    printf("Informe o valor do premio: ");
    scanf("%f",&premio);

    somaApostas = jogador1+jogador2+jogador3;
    valorTotal = premio / somaApostas;

    ganhador1 = jogador1 * valorTotal;
    ganhador2 = jogador2 * valorTotal;
    ganhador3 = jogador3 * valorTotal;

    printf("Jogador 1 recebera R$: %.1f\n", ganhador1);
    printf("Jogador 2 recebera R$: %.1f\n", ganhador2);
    printf("Jogador 3 recebera R$: %.1f\n", ganhador3);

    return 0;
}
