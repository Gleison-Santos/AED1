#include <stdio.h>
#include "tad_conversao.h"

int main(){
int op, elem;
Pilha p;
 do
    {

        do
        {
            printf(" \n--- PILHA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Converte\n");
            printf(" 4. Sair\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 4))
            {
                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 4));

        switch (op)
        {
            // inicializa pilha
        case 1:
            p = cria_pilha();
            if (p != NULL)
                printf("\nPilha criada com sucesso!!!\n");
            else
                printf("\nErro\n");
            break;
            // verifica se está vazia
        case 2:
            if (pilha_vazia(p) == 1)
                printf("\nPilha Vazia!\n");
            else
                printf("\nPilha com elementos!\n");
            break;
            // verifica se está cheia
        case 3:
                printf("\nDigite o numero decimal\n");
                scanf("%d",&elem);
                converte(p, elem);
            break;

        default:
            printf("\n\n FINALIZADO!");
        }
    } while (op != 4);
    return 0;
}