#include <stdio.h>
#include "lista_bebidas.h"
#include <string.h>

int main(){
    Lista lst;
    int valor, controle = 0; 
    int OP;
    int volume;
    char nome[20];
    float preco;

        do{
            printf("\nEscolha uma opcao:\n");
            printf("    (1) - Criar uma lista.\n");
            printf("    (2) - Verificar se lista esta vazia.\n");
            printf("    (3) - Inserir elemento.\n");
            printf("    (4) - Remove elemento.\n");
            printf("    (5) - Imprime a lista.\n");
            printf("    (0) - Sair.\n");
            printf("\n\nOpcao: ");
            scanf("%d",&OP);

            if(OP < 0 || OP > 5)
                printf("\nOpcao invalida!!\n");
            else{
                switch(OP){
                    case 1:
                        lst = cria_lista();
                    if(lst != NULL)
                        printf("\nLista criada com sucesso\n");
                    controle = 1;
                    break;

                    case 2:
                        if(controle !=1)
                            printf("\nLista nao foi criada!!!\n");
                        else if( lista_vazia(lst) == 1)
                            printf("\nLista vazia!!!\n");           
                    break;

                    case 3:
                        if(lst == NULL)
                            printf("\nLista nao foi criada!!\n");
                        else{
                            printf("\nDigite o nome: ");
                            setbuf(stdin,NULL);
                            gets(nome);

                            printf("Volume: ");
                            scanf("%d",&volume);

                            printf("Preco: ");
                            scanf("%f",&preco);

                        if(insere_elem(lst, nome, volume, preco) == 1)
                            printf("\ninserido com sucesso!!\n");
                        }
                    break;
                
                    case 4:
                        if(controle != 1)
                            printf("\nLista nao foi criada!!\n");
                        else if(lista_vazia(lst) == 1)
                            printf("\nLista vazia!!\n");
                        else {
                            printf("\nDigite o nome que deseja remover: ");
                            setbuf(stdin,NULL);
                            gets(nome);
                        if(remove_elem(&lst, nome) == 1)
                            printf("\nElemento removido com sucesso!!\n");
                        }
                            
                    break;

                    case 5:
                        if(controle != 1)
                            printf("\nLista nao foi criada!!\n");
                        else 
                            imprime_lista(lst);
                    break;
                }
            }

        }while(OP != 0);
    return 0;
}