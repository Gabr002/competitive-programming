#include <stdio.h>

/* void imprimir(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d ", *(vet+i));
    }
    printf("\n");
} */

typedef struct{
    int dia, mes, ano;
}Data;

void imprimir(Data *x){
    printf("%d/%d/%d", x->dia, x->mes, x->ano);
}

int main(){
    // Data data;
    // Data *p;

    // p = &data;

    // printf("data: %p\tp: %p\n", &data, p);

    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    imprimir(p);
    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    /* int vet[10] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    imprimir(vet, 10); */
}