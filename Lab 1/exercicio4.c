#include <stdio.h>

int main(){
    float massa, altura, imc;
    int x=0;

    do{
        printf("    IMC       |      Classificacao\n");
        printf("18,5 - 24,9   |  Magreza\n");
        printf("18,5 - 24,9   |  Saudavel\n");
        printf("18,5 - 24,9   |  Sobrepeso\n");
        printf("18,5 - 24,9   |  Obesidade Grau |\n");
        printf("18,5 - 24,9   |  Obesidade Grau || (severa)\n");
        printf("18,5 - 24,9   |  Obesidade Grau ||| (morbida)\n");
        x=1;
    }while(x!=1);

    printf("\nDigite seu peso: ");
    scanf("%f",&massa);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    imc = massa/((altura*altura));

    if(imc < 18.5)
        printf("\nSeu IMC eh: %.2f, Magreza\n",imc);
    else if(imc >=18.5 && imc <=24.9)
        printf("\nSeu IMC eh: %.2f, Saudavel\n",imc);
    else if(imc >= 25.0 && imc <=29.9)
         printf("\nSeu IMC eh: %.2f, Sobrepeso\n",imc);
    else if(imc >= 30.0 && imc <=34.9)
        printf("\nSeu IMC eh: %.2f, Obesidade Grau |\n",imc);
    else if(imc >=35.0 && imc <=39.9)
        printf("\nSeu IMC eh: %.2f, Obesidade Grau || (severa)\n",imc);
    else if(imc >= 40.0)
        printf("\nSeu IMC eh: %.2f, Obesidade Grau ||| (morbida)\n",imc);
    return 0;
}
