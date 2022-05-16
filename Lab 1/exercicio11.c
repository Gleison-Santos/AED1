#include <stdio.h>

struct endereco{
    char pais[15];
    char cidade[15];
    char estado[15];
    char rua[30];
    char bairro[20];
    char complemento[20];
    int numero;
    int cep[8];
};
typedef struct endereco Endereco;

struct dataNascimento{
    int dia;
    int mes;
    int ano;
};
typedef struct dataNascimento Data;

struct agenda{
    char Nome[30];
    char email[40];
    int DDD;
    int telefone[9];
    Data dt;
};
typedef struct agenda Agenda;

int main(){

int i, tamanho = 1;
Agenda a[tamanho];

printf("\n");
printf("Cadastro Agenda:\n");

for(i=0;i<tamanho;i++){
    printf("\nNome:");
    setbuf(stdin,NULL);
    gets(a[i].Nome);

    printf("\n");

    printf("Data de Nascimento:\n");
    printf("\nDia:");
    scanf("%d",&a[i].dt.dia);
    
    printf("Mes:");
    scanf("%d",&a[i].dt.mes);
    
    printf("Ano:");
    scanf("%d",&a[i].dt.ano);

    printf("DDD: ");
    scanf("%d",&a[i].DDD);

    printf("Telefone: ");
    scanf("%d",&a[i].telefone[i]);

    printf("Email: ");
    setbuf(stdin,NULL);
    gets(a[i].email);

    printf("\n");

    printf("Endereco:\n");
    printf("Pais: ");
    setbuf(stdin,NULL);
    gets(a[i].end.pais);

    printf("Cidade: ");
    setbuf(stdin,NULL);
    gets(a[i].end.cidade);

    printf("Estado: ");
    setbuf(stdin,NULL);
    gets(a[i].end.estado);

    printf("Rua: ");
    setbuf(stdin,NULL);
    gets(a[i].end.rua);

    printf("Numero: ");
    scanf("%d",&a[i].end.numero);

    printf("Bairro: ");
    setbuf(stdin,NULL);
    gets(a[i].end.bairro);

    printf("CEP: ");
    scanf("%d",&a[i].end.cep);

    printf("Complemento: ");
    setbuf(stdin,NULL);
    gets(a[i].end.complemento);
    printf("\n");
}

printf("\n");

for(i=0;i<tamanho;i++){
    printf("Nome: %s\n", a[i].Nome);
    printf("Email: %s\n", a[i].email);
    printf("Data de Nascimento: %d %d %d\n", a[i].dt.dia, a[i].dt.mes, a[i].dt.ano);
    printf("DDD: %d ", a[i].DDD);
    printf("Telefone: %d\n", a[i].telefone[i]);
    printf("\nEndereco\n");
    printf("Pais: %s\n", a[i].end.pais);
    printf("Cidade: %s\n", a[i].end.cidade);
    printf("Estado: %s\n", a[i].end.estado);
    printf("Rua: %s \n", a[i].end.rua);
    printf("Bairro: %s\n", a[i].end.bairro);
    printf("Numero: %d\n", a[i].end.numero);
    printf("Complemento: %s\n", a[i].end.complemento);
    printf("CEP: %d\n", a[i].end.cep[i]);
    

    printf("\n");
 }

    return 0;
}