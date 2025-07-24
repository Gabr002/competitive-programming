#include <stdio.h>
#include <stdlib.h>

/*
    Aula 235: Inserção em uma FILA

    FIFO - First-In, First-Out - Primeiro a Entrar, Primeiro a Sair
*/

typedef struct node{
    int value;
    struct node *next;
}Node;

typedef struct{
    Node *start;
    Node *end;
    int _length_;
}Row;

void createRow(Row *row){
    row->start = NULL;
    row->end =  NULL;
    row->_length_ = 0;
}

void insertElement(Row *row, int num){
    Node *aux, *new = malloc(sizeof(Node));

    if(new){
        new->value = num;
        new->next = NULL;
        if(row->start == NULL){
            row->start = new;
            row->end = new;
        }
        else{
            row->end->next = new;
            row->end = new;
        }
        row->_length_++;
    }else
        printf("Error Memory Allocated");
}

Node* deleteOfRow(Row *row){
    Node *delete = NULL;

    if(row->start){
        delete = row->start;
        row->start = delete->next;
        row->_length_--;
    }else
        printf("\tVoid row!\n");
    return delete;
}

void printRow(Row *row){
    Node *aux = row->start;

    printf("\t--------- ROW ---------\n\t");
    if(aux){
        while(aux){
            printf("%d ", aux->value);
            aux = aux->next;
        }
    }else
        printf("\tVoid!");
    printf("\n\t----- END ROW! ---------\n");
}

int main(){
    Node *delete;
    Row row;
    int opcao, value;

    createRow(&row);
    do{
       printf("\t0 - Exit \n\t1 - Insert\n\t2 - Delete\n\t3 - Print\n");
       scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Type to value: ");
                scanf("%d", &value);
                insertElement(&row, value);
                break;
            case 2:
                delete = deleteOfRow(&row);
                if(delete){
                    printf("\tremovido: %d\n", delete->value);
                    free(delete);
                }
                break;
            case 3:
                printRow(&row);
                break;
            default:
                if(opcao != 0)
                    printf("\nInvaleded opcao!\n");
        }
    }while(opcao != 0);
}