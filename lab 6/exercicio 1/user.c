#include <stdio.h>
#include "TAD_din_encad.h"

int main(){
      int op, elem, i = 0, x = 0;
    Lista lista;
        
    do{
        printf("\n\n --- LISTAS DINAMICA ENCADEADA --- \n\n");
        printf(" Escolha uma opcao\n");
        printf(" 1. Criar lista\n");
        printf(" 2. Verificar se a lista vazia\n");
        printf(" 3. Inserir elemento\n"); 
        printf(" 4. Remove elemento\n");
        printf(" 5. Imprimir lista\n");
        printf(" 0. Sair!!!\n");
        printf(" Opcao: ");

        scanf("%d", &op);
        
        if((op < 0) || (op > 5)) {
            printf("\n\n Opcao Invalida! Tente novamente...");
        }
            
        switch(op)
        {   
            case 1:
                lista = cria_lista();
                if(lista == NULL){
                    printf("\nLista criada com sucesso!!!\n");
                    x = 1;
                } 
                break;
            case 2:
                if(lista_vazia(&lista) == 1)
                    printf("Lista vazia!!!\n");
                else
                    printf("Existe elementos na lista!!!\n");
                break;
            case 3:
                if(x != 1){
                    printf("\nLista nao foi criada!!\n");
                }else{
                    printf("\nDigite o numero: ");
                    scanf("%d",&elem);
                if(insere_elem(&lista, elem) == 1)
                    printf("Elemento inserido com sucesso!!!\n");
                else
                    printf("Falha na insercao!!!\n");
                }
                break;
            case 4:
               printf("\nDigite qual elemento deseja remover: ");
                scanf("%d",&elem);

                if(remove_elem(&lista, elem) == 1)
                    printf("Elemento removido com sucesso!!!\n");
                break;
            case 5:
                imprime(lista);
                break;
        }
    } while(op != 0);
    return 0;
}