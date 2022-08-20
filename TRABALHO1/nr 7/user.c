#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "josephus.h"

int main (){
    int op;  
    do{
        do{
            printf(" --- PROBLEMA DE JOSEPHUS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar pelotao\n");
            printf(" 2. Inserir soldado\n");
            printf(" 3. Remover soldado \n");
            printf(" 4. Imprimir nome soldados\n");
            printf(" 5. Imprimir nome soldados removidos\n");            
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 6))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 6));

        switch (op){
            
        case 1: 
            printf("\nCriar pelotao \n");
            List sold, baixas;
            sold = creat_list();
            baixas = creat_list();
            printf("Pelotao cridado com sucesso!\n");
            break;
        case 2:
            printf("\nInserir soldado\n");
            char nome[30];
            int res2;
            printf("\nDigite o nome do soldado: ");
            setbuf(stdin,NULL);
            gets(nome);           

            res2 = insert_soldier_end(&sold, nome);

            if(res2 == -1)
                printf("\nErro\n");
            else
                printf("\nSoldado com sucesso\n");
            break;

        case 3:
            printf("\nRemover um soldado \n");
            
            int RES, sorteado, pos;

            RES = remove_soldier(&sold, &baixas);

            if(RES == -1)
                printf("\nErro!\n");
            else if(RES == -5)
                printf("\nTente novamente! \n");            
            else if(RES == 10)
                printf("\nSobrou apenas um\n");
            else
                printf("\nSoldado removido com sucesso! ");
            break;
        case 4:
            printf("\n\n4. Imprimir pelotao\n");
            print_list(sold);
            printf("}\n");
            break;
        case 5:
            printf("\n\n5. Imprimir baixas\n");
            printf("\nBaixas");
            print_list(baixas);
            printf("}\n");
            break;
        default:
            printf("\nFINALIZAR...\n\n");
        }
    } while(op != 6);
    return 0;
}