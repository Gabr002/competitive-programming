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

int main(){

}