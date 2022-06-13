#include <stdio.h>
#include "TAD_lista_ord.h"

int main(){
    
    int op, elem, i = 0;
    Lista l;
        
    do{
        printf("\n\n --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
        printf(" Escolha uma opcao\n");
        printf(" 1. Criar lista\n");
        printf(" 2. Verificar se a lista vazia\n");
        printf(" 3. Verificar se a lista cheia\n");
        printf(" 4. Inserir ordenado\n"); 
        printf(" 5. Remove ordenado\n");
        printf(" 6. Imprimir lista\n");
        printf(" 0. Sair!!!\n");
        printf(" Opcao: ");

        scanf("%d", &op);
        
        if((op < 0) || (op > 6)) {
            printf("\n\n Opcao Invalida! Tente novamente...");
        }
            
        switch(op)
        {   
            case 1:
                l = cria_lista();
                if(l != NULL)
                    printf("\nLista criada com sucesso!!!\n");
                break;

            case 2:
                if(lista_vazia(l) == 1)
                    printf("Lista vazia!!!\n");
                else
                    printf("Existe elementos na lista!!!\n");
                break;

            case 3:
                if(lista_cheia(l) == 1)
                    printf("Lista cheia!!!\n");
                else
                    printf("Lista nao esta cheia!!!\n");
                break;

            case 4:
                printf("\nDigite o numero: ");
                scanf("%d",&elem);
                printf("\n");

                if(insere_ord(l, elem) == 1)
                    printf("Elemento inserido com sucesso!!!\n");
                else
                    printf("Falha na insercao!!!\n");
                break;

            case 5:
                printf("\nDigite qual elemento deseja remover: ");
                scanf("%d",&elem);

                if(remove_ord(l, elem) == 1)
                    printf("Elemento removido com sucesso!!!\n");
                break;

            case 6:
                imprime_lista(l);
                break;
        }
    } while(op != 0);
     return 0;
}
   
