#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    
    cin >> num; // Total de numeros para a sequencia de fibonacci
    
    int vetFib[num]; // Declarei o vetor da seq. fibonacci
    
    vetFib[0] = 0; // 1° posicao recebe 0.
    vetFib[1] = 1; // 2° posicao recebe 1.
    
    int somaAntecessores;
    vetFib[2] = 1; // 1 posicao recebe a soma dos numeros antecessores.
    for(int i = 2; i <= num; i++){ 
        somaAntecessores = vetFib[i-1] + vetFib[i]; // Variavel guarda a somaAntecessores
        vetFib[i+1] = somaAntecessores; // Valor atribuida a proxima pos.
    }
    
    std::cout << vetFib[num+1] << std::endl; // Printa o enesimo valor + quebra linha.
}