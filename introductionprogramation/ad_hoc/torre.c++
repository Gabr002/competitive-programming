/* usar vetor essquerda e vetor direita */

#include <bits/stdc++.h>
using namespace std;
#define tamV 1000

int main(){

    long long int tam = 0;
    int soma = 0, peso = 0, maiorPeso; // Inicializando váriaveis
    
    cin >> tam;
    
    int vet[tamV][tamV], Linha[tamV], coluna[tamV];

    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            cin >> vet[i][j];
            soma += vet[i][j];
        }
        Linha[i] = soma;
        soma = 0;
    }
        
    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            soma += vet[j][i];
        }
        coluna[i] = soma;
        soma = 0;
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(((Linha[i]+coluna[j]) - 2*vet[i][j]) > peso){
                maiorPeso = (Linha[i]+coluna[j])-2*vet[i][j];
                peso = maiorPeso;
            }
        }
    }

    cout << peso << endl; // Imprime o peso
}

