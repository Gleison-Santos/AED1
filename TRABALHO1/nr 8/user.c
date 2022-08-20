#include <stdio.h>
#include <stdlib.h>
#include "polinomio.h"

int main(){
    Poli poli;
    int base, expo;
    int op;

    do{
        do{
            printf(" --- POLINOMIOS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar um polinomio\n");
            printf(" 2. Inserir um novo elemento no polinomio\n");
            printf(" 3. Imprimir polinomio\n");
            printf(" 4. Excluir elemento\n");
            printf(" 5. Reiniciar um polinomio\n");
            printf(" 6. Calcular polinomio\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 7));
        
        switch (op){
        case 1: 
        printf("\n1.Inicializar um polinomio\n");
            poli = create_poli();
            printf("Polinomio criado com sucesso.\n");
        break;         
        case 2: 
            printf("\n2. Inserir novo elemento no polinomio\n\n");
            int opcao, res2;
            printf("Deseja inserir um valor no elemento?\n1: SIM\n2: NAO\nOpcao: ");
            scanf("%d",&opcao);

            if(opcao == 1){
                printf("\nDigite o valor da base: ");
                scanf("%d", &base);
                printf("\nDigite o valor do expoente: ");
                scanf("%d", &expo);

                res2 = inserir_term_ord(&poli, base, expo);

                if(res2 == 0)
                    printf("\nElemento %dx elevado %d inserido com sucesso!\n", base, expo);
                else  
                    printf("\nFalha ao inserir elemento\n");

            }else if(opcao == 2){
                printf("\nEntre com o elemento: ");
                scanf("%d", &base);
                expo = 0;
                res2 = inserir_term_ord(&poli, base, expo);
                 if(res2 == -1)
                    printf("\nFalha ao inserir elemento");
                    printf("\nElemento %d inserido com sucesso! \n",base);
            }else
            break;
        break; 
        case 3: 
            printf("\nImprimir polinomio\n");
            printf("\nP(x) = ");
            imprime_poli(poli);            
            break; 
        case 4: 
            printf(" 4. Remover elemento\n");
            printf("\nEntre com o expoente que deseja remover: ");                
            scanf("%d", &expo);
                if (remove_term(&poli, expo) == 0)
                    printf("\nExpoente %d removido com sucesso.\n", expo);
                else
                    printf("\nErro");            
            break; 
        case 5: 
            printf("\n5. Reiniciar um polinomio\n\n");
                if(reinicia_poli(&poli) == 0)
                    printf("Elementos removidos com sucesso\n");
                else
                printf("\nErro\n");            
            break; 
        case 6: 
            printf("\nCalcular Polinomio\n");
                printf("\nDigite o valor de x que deseja substituir: ");            
            int x;    
            scanf("%d", &x);
            int resp6 = calcular_poli(poli, x);
                if (resp6 == -1)
                    printf("\nErro\n"); 
                else  
                    printf("\nO valor de P(x) eh = %d.\n", resp6);         
            break; 

        default:
            printf("\nFINALIZAR...\n\n");
        }        
    } while (op != 7);

    return 0;
}