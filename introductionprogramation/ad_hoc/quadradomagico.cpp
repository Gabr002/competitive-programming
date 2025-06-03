#include <bits/stdc++.h>
using namespace std;
#define tamv 10

int vet[tamv][tamv];

int main(){
    int tam, soma = 0, QM = 0;
    
    cin >> tam;
    
    for(int i = 1; i <= tam; i++){
        for(int j = 1; j <= tam; j++)
            cin >> vet[i][j];
    }
    
    for(int i = 1; i <=tam; i++)
        QM += vet[1][i];
    
    
    // Soma vetor bidimensional das linhas
    for(int i = 1; i <= tam; i++){
        for(int j = 1; j <= tam; j++){
            soma += vet[i][j];
        }
        if(soma != QM){
            std::cout << -1 << std::endl;
            return 0;
        }
        soma = 0;
    }
    
    // Soma vetor bidimensional das colunas
    for(int i = 1; i <= tam; i++){
        for(int j = 1; j <= tam; j++){
            soma += vet[j][i];
        }
        if(soma != QM){
            std::cout << -1 << std::endl;
            return 0;
        }
        soma = 0;
    }

    // Soma do vetor bidimensional da diagonal principal
    for(int i = 1; i <= tam; i++){
        soma += vet[i][i];
    }
    
    if(soma != QM){
        std::cout << -1 << std::endl;
        return 0;
    }
    soma = 0;
    
    // Soma do vetor bidimensional da diagonal secundaria 
    for(int i = 1; i <= tam; i++){
        for(int j = 1; j <= tam; j++){
            if(i+j == tam+1)
                soma += vet[i][j];
        }
    }
    
    if(soma != QM){
        std::cout << -1 << std::endl;
        return 0;
    }
    
    std::cout << QM << std::endl;
    return 0;
}