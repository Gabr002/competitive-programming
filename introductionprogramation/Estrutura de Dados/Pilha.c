#include <stdio.h>
#include <stdlib.h>

/*
    Estrutura de Dados Dinâmicas
*/

typedef struct no{
    Pepleo s;
    struct no *next;
}No;

typedef struct{
    int day, month, year;
}Data;

typedef struct{
    char name[50];
    Data date;
}Pepleo;


typedef struct{
    No *top;
    int tam;
}Stack;

void createStack(Stack *s){
    s->top = NULL;
    s->tam = 0; 
}

Pepleo toReadPepleo(){
    Pepleo p;
    printf("\ntype it name and date of birth dd mm aaaa:\n");
    scanf("%49[^\n]%d%d%d", p.name, &p.date.day, &p.date.month, &p.date.year);
    return p;
}

void printPepleo(Pepleo p){
    printf("\nNome: %s\n Data: %2d/ %2d / %2d \n", p.name, p.date.day, p.date.month, p.date.year);
}

// Função para operação push(empilhar)

void push(Stack *s){
    No *new = malloc(sizeof(No));

    if(new){
        new->s = toReadPepleo();
        new->next = s->top;
        s->top = new;
        s->tam++;
    }
    else
        printf("\nError Allocated\n");
}

No* pop(Stack *s){
    if(s->top){
        No *delete = s->top;
        s->top = delete->next;
        s->tam--;
        return delete;
    }else
        printf("\nStack Vazia!\n");
    return NULL;
}

void printStack(Stack *s){
    No *aux = s->top;
    printf("\n------------- PILHA Tam: %d ---------------\n", s->tam);
    while(aux){
        printPepleo(aux->s);
        aux = aux->next;
    }
    printf("\n----------- FIM PILHA -------------\n");
}

int main(){
    No *delete;
    Stack *s;
    int opcao;

    createStack(&s);

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1:
                push(&s);
                break;
            case 2:
                delete = pop(&s);
                if(delete){
                    printf("\nElement delete success!\n");
                    printPepleo(delete->s);
                    free(delete);
                }else{
                    printf("\nNot node from delete!\n");
                }
                break;
            case 3:
                    printStack(&s);
                break;
            default:
                if(opcao != 0)
                    printf("\nOpcao invalida!!!\n");
        }

    }while(opcao != 0);

    return 0;
}