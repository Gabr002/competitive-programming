#include <bits/stdc++.h>
using namespace std;

int main(){
    int iteracoes, count = 0;
    
    cin >> iteracoes;
    
    int vet[iteracoes];


    for(int i = 0; i < iteracoes; i++)
        cin >> vet[i];
    
    for(int i = 0; i < iteracoes; i++){
        for(int j = 0; j < iteracoes; j++){
            if(vet[i] < vet[j]){
                int aux;
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(int i = 0; i < iteracoes; i++){
        
        for(int j = 0; j < iteracoes; j++){
            
            if(vet[i] == vet[j])
                count++;

        }
        if(vet[i] != vet[i+1])
            cout << vet[i] << " aparece " << count << " vez(es)" << endl;
        
        count = 0;
    }
}