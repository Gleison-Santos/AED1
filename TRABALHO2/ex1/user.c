#include <stdio.h>
#include "pilha.h"

int main()
{
    Pilha p;
    int elem;
    int op;

    do
    {

        do
        {
            printf(" \n--- PILHA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Verificar pilha cheia\n");
            printf(" 4. Empilhar elemento (Push)\n");
            printf(" 5. Desempilhar elemento (Pop)\n");
            printf(" 6. Le topo\n");
            printf(" 7. Imprime Pilha\n");
            printf(" 8. Verifica se eh palindromo\n");
            printf(" 9. Elimina elemento\n");
            printf(" 10. Pares e impares\n");
            printf(" 11. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 11))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 11));

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
            if (pilha_cheia(p) == 1)
                printf("\nPilha cheia\n");
            else
                printf("\nPilha não esta cheia!\n");
            break;

            // Empilha elemento(push)
        case 4:
            printf("Digite elemento: ");
            scanf("%d", &elem);
            if (empilha(p, elem) == 1)
                printf("\nElemento empilhado com sucesso\n");
            else
                printf("\nErro!\n");

            break;

            // Desempilha(pop)
        case 5:
            if (p == NULL || pilha_vazia(p))
                printf("\nErro ao desempilhar\n");
            else
                desempilha(p, &elem);
            printf("\nElemento desempilhado com sucesso!\n");
            printf("Elemento: %d\n", elem);
            break;

            // Retona elemento do topo
        case 6:
            if (le_topo(p, &elem) == 1)
                printf("\nElemento do topo e: %d\n", elem);
            else
                printf("\nErro\n");
            break;

            // Imprime Pilha
        case 7:
            imprime(p);
            break;

            // Verifica se é palindromo
        case 8:
            if (p == NULL)
                printf("\nErro\n");
            if (palindromo(p) == 1)
                printf("\nE palindromo\n");
            else
                printf("\nNao e palindromo\n");
            break;

            // Elimina elemento
        case 9:
            printf("\nDigite o elemento que deseja remover: ");
            scanf("%d", &elem);

            if (elimina(p, elem) == 1)
                printf("\nElemento Removido com sucesso\n");
            else
                printf("\nNao foi possivel remover elemento\n");
            break;

            // Retorna pilha uma pilha somente com pares e uma com impares.
        case 10:
            if (p == NULL || pilha_vazia(p))
                printf("\nErro\n");
            else
                Pares_e_impares(p);

            break;
        default:
            printf("\n\n FINALIZADO!");
        }
    } while (op != 11);

    return 0;
}