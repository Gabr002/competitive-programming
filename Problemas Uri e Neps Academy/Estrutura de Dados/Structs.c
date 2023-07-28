// Relembrando o ínicio da faculdade, ajudando outros alunos.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define tam 50

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;    

struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
}

Pessoa lerPessoa(){
    Pessoa p;

    printf("Digite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite f ou m: ");
    scanf("%c", &p.sexo);
    return p;
}

int main(){
    
    Pessoa pessoa;

    pessoa = lerPessoa();
}