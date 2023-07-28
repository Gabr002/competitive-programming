#include <stdio.h> /* printf e scanf */
#include <stdlib.h> /* malloc */
typedef struct row Row;

Row* rowCreate(void);
void rowInsert(Row* r, float v);
float rowDelete(Row* r);
int rowVoid(Row* r);
void rowFree(Row* r);

#define N 100

struct row{
    int numberElements;
    int start;
    float vet[N];
};

Row* createRow(void){
    Row* _row = (Row*) malloc(sizeof(Row));
    _row->numberElements = 0; /* starting void row */
    _row->start = 0; /* switch a position starting */
    return _row;
}

void rowInsert(Row* r, float v){
    int end;
    if(r->numberElements == N){ /* Queue full: element capacity exhausted */
        printf("element capacity exhausted\n");
        exit(1); /* abort program */
    }
    /* insert element in nest position free */
    r->vet[end] = v;
    r->numberElements++;
}

float rowDelete(Row *row){
    float del;
    if(rowVoid(row)){
        printf("Row void!\n");
        exit(1); /* abort program */   
    }
    /* delete element start */
    del = row->vet[row->start];
    row->start = (row->start + 1) % N;
    row->numberElements--;
    return del;
}

int rowVoid(Row* row){
    return (row->numberElements == 0);
}

void rowFree(Row* row){
    free(row);
}

