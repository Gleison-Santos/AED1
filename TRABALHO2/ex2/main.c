#include <stdio.h>
#include <string.h>
#include "pilha_dinamicaEncad.h"

int main()
{
    Pilha P;
    int elem;
    int op;
    char vet[20];

    do
    {

        do
        {
            printf(" \n--- PILHA DINAMICA ENCADEADA --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Empilhar elemento (Push)\n");
            printf(" 4. Desempilhar elemento (Pop)\n");
            printf(" 5. Le topo\n");
            printf(" 6. Imprime Pilha\n");
            printf(" 7. Verifica se eh palindromo\n");
            printf(" 8. Elimina elemento\n");
            printf(" 9. Pares e impares\n");
            printf(" 10. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 11))
            {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 10));

        switch (op)
        {
            //inicializa pilha
        case 1:
                P = cria_pilha();
                if(cria_pilha != NULL)
                    printf("\nPilha criada com sucesso!!\n");
            break;
            //verifica se está vazia
        case 2:
            if(pilha_vazia(P) == 1)
                printf("\nPilha esta vazia\n");
            break;

        case 3: 
                printf("\nDigite o elemento: ");
                scanf("%d",&elem);

                if(empilha(&P,elem) == 1)
                    printf("Elemento inserido com sucesso\n");
            break;

            //Empilha elemento(push)
        case 4: 
                if(desempilha(&P,&elem) == 1)
                    printf("Elemento eliminado com sucesso\n");
            break;

            //Desempilha(pop)
        case 5:
                if(le_topo(&P, &elem) == 1)
                    printf("\nElemenento eh: %d\n");
            break;

            //Retona elemento do topo
        case 6:
                imprime(P);
            break;

            //Imprime Pilha
        case 7:
                printf("Digite a palavra: ");
                setbuf(stdin,NULL);
                gets(vet);
                if(palindromo(vet) == 1)
                    printf("\nEh palindromo\n");
                else
                    printf("\nNao eh palindromo\n");

            break;
            //Verifica se é palindromo
        case 8:
                printf("Digite um numero: ");
                scanf("%d",&elem);
                if(elimina(&P,elem) == 1)
                    printf("Elemento eliminado com sucesso\n");
            break;

            //Elimina elemento
        case 9:
                Pares_e_impares(P);
            break;
        default:
            printf("\n FINALIZADO!\n");
        }
    } while (op != 10);

    return 0;
}