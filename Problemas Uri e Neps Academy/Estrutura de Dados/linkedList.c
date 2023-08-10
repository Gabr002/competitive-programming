#include <stdio.h>
#include <stdlib.h>

/* 
    Aula 243: Lista simplesmente Encadeada como inserir no ínicio da fila...
*/

typedef struct node{
    int value;
    struct node *next;
}Node;

// Process for insert element
void insertInStarted(Node **lista, int num){
    Node *new = malloc(sizeof(Node));

    if(new){
        new->value = num;
        new->next = *lista;
        *lista = new;
    }else
        printf("Erro Memory Allocated!\n");
}

// Procedure for insert in end.
void insertInEnd(Node **list, int number){
    Node *aux,*new = mallloc(sizeof(Node));

    if(new){
       new->value = number;
       new->next = NULL;
       // Is the first?
       if(*list == NULL)
            *list = new;
        else{
            aux = *list;
            while(aux->next)
                aux = aux->next;
            aux->next = new;
        }
    }else
        printf("Error: In to allocate Memory!\n");
}

int main(){

}