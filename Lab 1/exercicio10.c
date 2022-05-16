#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, soma=0,aux1=0, aux2=0, op, x=0, matrizPrincipal[6][6]={ 1,2,3,4,5,6,
                                                                  7,8,9,10,11,12,
                                                                  13,14,15,16,17,18,
                                                                  16,20,21,22,23,24,
                                                                  25,26,27,28,29,30, 
                                                                  31,32,33,34,35,36};
    /*
            MATRIZ 6x6
         0  1  2  3  4  5
      0  1, 2 ,3 ,4, 5, 6,
      1  7, 8, 9, 10,11,12,
      2  13,14,15,16,17,18,
      3  16,20,21,22,23,24,
      4  25,26,27,28,29,30, 
      5  31,32,33,34,35,36
    */

do{ 
     printf("\n");
    //Imprimindo a matriz principal
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d  ",matrizPrincipal[i][j]);   
        }
        printf("\n");
    }
    printf("\n");

    printf("Escolha uma opcao: de 0 a 5:\n"); 
    printf("(1) iMPRIMIR A SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL..\n");
    printf("(2) IMPRIMIR A SOMA DOS ELEMENTOS ACIMA DA DIAGONAL SECUNDARIA..\n");
    printf("(3) IMPRIMIR A SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL E SECUNDARIA..\n");
    printf("(4) IMPRIMIR A SOMA DOS ELEMENTOS LATERAIS ESQUERDOS ABAIXO DA DIAGONAL PRINCIPAL E A CIMA DA SECUNDARIA..\n");
    printf("(5) IMPRIMIR A SOMA DOS ELEMENTOS LATERAIS ESQUERDOS E DIREITOS ENTRE AS DIAGONAIS..\n");
    printf("(0) - SAIR..\n");

    printf("\n");

    scanf("%d",&op);
    system("cls");

    switch (op){
        case 0:  break;

        case 1: //1º Soma dos Elementos a cima da diagonal principal
            
            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                    if(i < j){
                        soma+= matrizPrincipal[i][j];
                        printf("%d ",matrizPrincipal[i][j]);    
                    }
                }
            }
        printf("\nA soma dos elementos a cima da diagonal principal eh: %d\n",soma); 
        soma = 0; 
        break;

        case 2: //2º Soma dos Elementos a cima da diagonal secundaria

            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                     if(j+i<=4){
                        printf("%d ", matrizPrincipal[i][j]);
                        soma+= matrizPrincipal[i][j];
                    }
                }    
            }
        printf("Soma dos elementos a cima da diagonal secundaria eh: %d\n\n",soma);
        soma = 0;
        break;

        case 3: // 3º Soma dos elementos a cima da diagonal principal e secundaria 
            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                    if(i < j && (j+i) <= 4){
                        soma+=matrizPrincipal[i][j];
                        printf("%d ",matrizPrincipal[i][j]);
                    }   
                }
            }
        printf("\nsoma dos elementos a cima da diagonal princial e secundaria: %d\n",soma);
        soma = 0;
        break;

        case 4://4º Soma dos elementos laterais esquerdos abaixo da diagonal principal e a cima da diagonal secundaria
            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                    if(i > j && (j+i) <= 4){
                        soma+=matrizPrincipal[i][j];
                        printf("%d ",matrizPrincipal[i][j]);
                    }   
                }
            }

        printf("\nsoma dos elementos laterais esquerdos abaixo da diagonal princial e secundaria: %d\n",soma);
        soma = 0;
        break;

        case 5://5º Soma dos elementos laterais esquerdos e direito entre  as diagonais
            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                    if((i > j && (j+i) <= 4)){
                        aux1 = soma+=matrizPrincipal[i][j];
                        printf("%d ",matrizPrincipal[i][j]);
                    }if(i<j && (i+j) >=6){
                        aux2 = soma+=matrizPrincipal[i][j];
                        printf("%d ",matrizPrincipal[i][j]);
                    }  
                }
            }
        printf("\nSoma dos elementos laterais esquerdos e direito abaixo da diagonal principal e a cima da diagonal secundaria: %d\n",soma);
        soma = 0;
        break;

        default: printf("Erro\n");
    }
}while(op !=0);

    return 0;
}