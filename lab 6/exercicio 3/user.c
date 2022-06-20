#include <stdio.h>
#include "TAD_bebida.h"
#include <string.h>

int main(){
    int op, x = 0;
    int volume;
    float preco;
    char nome[20];
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
                if(x !=1 || lista_vazia(lista) == 1){
                    printf("\nLista vazia!!!\n");
                }  
                else
                    printf("\nExiste elementos na lista!!!\n");
                break;
            case 3:
                if(x != 1){
                    printf("\nLista nao foi criada!!\n");
                }else{

                    printf("\nDigite o nome: ");
                    setbuf(stdin,NULL);
                    gets(nome);

                    printf("\nDigite o volume: ");
                    scanf("%d",&volume);

                    printf("\nDigite o preco: ");
                    scanf("%f",&preco);

                if(insere_elem(&lista, nome, preco, volume) == 1)
                    printf("\nElemento inserido com sucesso!!!\n");
                else
                    printf("\nFalha na insercao!!!\n");
                }
                break;
            case 4:
                if(x != 1){
                    printf("\nNao ha elementos a serem removidos\n");
                }else{
                    printf("\nDigite qual elemento deseja remover: ");
                    setbuf(stdin,NULL);
                    gets(nome);

                if(remove_elem(&lista, nome) == 1)
                    printf("\nElemento removido com sucesso!!!\n");
                }
                break;
            case 5:
                if(x !=1)
                    printf("\nNao existe elementos para imprimir!!!\n");
                else
                    imprime(lista);
                break;
        }
    } while(op != 0);
    return 0;
}