#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "josephus.h"

struct node{
    struct node *next;
    char nome[];    
};

List creat_list(){
    return NULL;
}

int empty_list(List lst){
    if(lst == NULL)
        return 0;
    else
        return -1;
}

int insert_soldier_end(List *lst, char *nome){
    List N = malloc (sizeof(struct node));

    if(N == NULL)
        return -1; 
    strcpy(N->nome, nome);
    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;      
    }else if(empty_list(*lst) == 1){
        N->next = (*lst)->next;
        (*lst)->next = N;
        *lst = N;
    }
    return 0;         
}
int insert_mortos(List *lst, char * nome){
    List N = malloc (sizeof(struct node));    
    if(N == NULL)
        return -1;

    strcpy(N->nome, nome);

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;
        return 0; 
    }   

     if(list_size(*lst) == 1){
        (*lst)->next = N;
        N->next = *lst;
     }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
    }
    return 0;
}
int remove_soldier(List *sold, List *baixas){  

    if(empty_list(*sold) == 0)
        return -1;

    List aux = (*sold)->next;
    List aux2 = *sold;
    List last = *sold;
    int j = 1, sorteado;
    char removido[20];
    sorteado = sort_number(*sold);
    
    if(sorteado == 0)
        return -5;
    if(list_size(*sold) == 1)
        return 1;

    if(sorteado == 1){ 
        strcpy(removido, aux->nome);
        insert_mortos(baixas, removido);        
        (*sold)->next = aux->next;
        free(aux);
        return 0;
    }
    if(sorteado == list_size(*sold)){
        for(j; j < sorteado; j++){
            aux = aux->next;
            aux2 = aux2->next;
    }
        strcpy(removido, (*sold)->nome);
        insert_mortos(baixas, removido);        
        aux->next = (*sold)->next;
        *sold = aux;
        free(last);
        return 0;
    }
    for(j; j < sorteado; j++){
        aux = aux->next;
        aux2 = aux2->next;
    }
    aux2->next = aux->next;
    strcpy(removido, aux->nome);
    insert_mortos(baixas, removido);
    free(aux);
    return 0;
}
int sort_number(List lst){
    int sorteio, tam;      
    if(empty_list(lst) == 0)
        return -1;
    tam = list_size(lst);
    sorteio = (rand() % tam);
    while(sorteio == 0)
        sorteio = (rand() % tam);    
    return sorteio;
}
int list_size(List lst){
    int size = 0;
    if(lst == NULL)
        return size;
    size = 1;
    List aux = lst->next;
    List last = lst;

    while(aux != last){        
        aux = aux->next;
        size++;
    }
    return size;
}
void print_list(List lst){
    List last = lst;
    if(empty_list(lst) == 0){
        printf(": {");
    }
    else{
        printf(": {");    
        do{
            printf((lst->next != last ) ? "%s, " : "%s", lst->next->nome);
            lst = lst->next;
        }while(lst != last);        
    }
       
}