#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("Memomy allocated from success!\n");
        
        for(i = 0; i < tam; i++)
            *(vet + i ) = rand() % 100;
        
        for(i = 0; i < tam; i++)
            printf("%d ", *(vet+i));
        printf("\n");

        printf("type the new size of array: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        printf("\nArray reallocated: \n");
        for(i = 0; i < tam; i++)
            printf("%d ", *(vet + i));
        printf("\n");

        free(vet);
    }
    else
        printf("Error allocated!");
}