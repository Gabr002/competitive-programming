#include <stdio.h>
#include <stdlib.h>

typedef struct stack Stack;

Stack* createStack(void);
void _push(Stack* s, float v);
float _pop(Stack* s);
int stackVoid(Stack* s);
void stackFree(Stack* s);

#define N 50

struct stack{
    int n;
    float vet[N];
};

Stack* createStack(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->n = 0; /* Inicializa elementos com zero  */
    return 0;
}

void _push(Stack* s, float v){
    if(s->n == N){ /* soul out */
        printf("soul out stack burst.\n");
        exit(1); /* abort software */
    }
    /* push element next adress free */
    s->vet[s->n] = v;
    s->n++;
}


float _pop(Stack* s){
    float v;
    if(stackVoid(s)){
        printf("Stack free.\n");
        exit(1); /* aborta programa */
    }
    /* retira elemento do topo */
    v = s->vet[s->n--];
    s->n--;
    return v;
}

int stackVoid(Stack* s){
    return (s->n == 0);
}

void stackFree(Stack* s){
    free(s);
}

int main(){

}