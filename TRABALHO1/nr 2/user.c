#include <stdlib.h>
#include <stdio.h>
#include "estatica_seq_ord.h"

int main()
{
    int op, elem, ME, tam;
    Lista lista, lst;
    do
    {
        do
        {
            printf("\n --- LISTAS ESTATICAS SEQUENCIAIS ORDENADAS --- \n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Excluir elemento\n");
            printf(" 6. Excluir elementos impares \n");
            printf(" 7. Menor elemento da lista\n");
            printf(" 8. Tamanho lista\n");
            printf(" 9. Concatena listas\n");
            printf(" 10. Imprime Lista\n");
            printf(" 11. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 11))
                printf("\n\n Opcao Invalida! Tente novamente...");
        } while ((op < 1) || (op > 11));

        switch (op)
        {
        case 1:
            lista = cria_lista();
            printf("Lista criada com sucesso.\n");
            break;

        case 2:
            if (lista_vazia(lista) == 1)
                printf("Lista vazia. \n");
            else
                printf("Lista nao esta vazia. \n");
            break;

        case 3:
            if (lista_cheia(lista) == 1)
                printf("\n\n Lista cheia. \n\n");
            else
                printf("\n\n Lista nao esta cheia. \n\n");
            break;

        case 4:
            printf("Qual elemento deseja inserir: \n");
            scanf("%d", &elem);
            if (insere_elem(lista, elem) == 1)
                printf("Numero inserido com sucesso!!\n");
            else
                printf("Numero nao inserido \n");
            break;

        case 5:
            printf("\n Qual elemento deseja remover: \n");
            scanf("%d", &elem);
            if (remove_elem(lista, elem) == 1)
                printf("Numero removido com sucesso!! \n");
            else
                printf("Numero nao encontrado \n");
            break;
        case 6:
            if (remove_impares(lista) == 1)
                printf("Numeros removidos com sucesso!!\n");
            else
                printf("Numeros nao removidos \n");
            break;

        case 7:

            if (lista_vazia(lista) == 1)
                printf("Lista vazia\n");
            else
            {
                ME = menor(lista);
                printf("Menor: %d", ME);
            }
            break;
        case 8:
            if (tamanho(lista) == 0)
            {
                printf("Lista vazia\n");
            }
            else
            {
                tam = tamanho(lista);
                printf("Tamanho: %d", tam);
            }
            break;
        case 9:
            lst = cria_lista();
            printf("Nova lista criada! \n");
            int op1, n1;
            do
            {
                do
                {
                    printf(" Escolha uma opcao\n");
                    printf(" 1. Inserir \n");
                    printf(" 2. Excluir \n");
                    printf(" 3. Imprime \n");
                    printf(" 4. Concatenar\n");
                    printf(" 5. Sair \n");
                    printf(" Opcao: ");
                    scanf("%d", &op1);
                    if ((op1 < 1) || (op1 > 5))
                        printf("Opcao Invalida! Tente novamente... \n");
                } while ((op1 < 1) || (op1 > 5));

                switch (op1)
                {
                case 1:
                    printf("Qual elemento deseja inserir: \n");
                    scanf("%d", &n1);
                    if (insere_elem(lst, n1) == 1)
                        printf("Numero inserido com sucesso \n");
                    else
                        printf("Numero nao inserido");
                    break;
                case 2:
                    printf("\n Qual elemento deseja remover: \n");
                    scanf("%d", &n1);
                    if (remove_elem(lst, n1) == 1)
                        printf("Numero removido com sucesso!!\n");
                    else
                        printf("Numero nao encontrado \n");
                    break;
                case 3:
                    imprime(lst);
                    break;
                case 4:
                    if (concatena(lista, lst) == 1)
                        printf("Listas concatenadas! \n");
                    else
                        printf("Listas nao concatenadas! \n");
                    break;
                }
            } while (op1 != 5);
            break;
        case 10:
            imprime(lista);
            break;
        }
    } while (op != 11);
    return 0;
}