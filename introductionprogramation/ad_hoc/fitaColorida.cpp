#include <bits/stdc++.h>
using namespace std;
#define tam 10000

int esq[tam], dir[tam], tamFita, count = 0, vetFita[tam];

int menor(int num1, int num2){
    if(num1 < num2) 
        return num1;
    else 
        return num2;
}

int main(){
    
    cin >> tamFita;
    
    for(int i = 1; i <= tamFita; i++)
        cin >> vetFita[i];
        
    // Armazeno infinito em todo o vetor
	for(int i=0; i<=tamFita+1; i++) 
	    esq[i]=dir[i]=tam;
    
    for(int i = 1; i <= tamFita; i++){
        
        if(vetFita[i] == 0)
            esq[i] = 0;
        else{
            esq[i] = esq[i-1] + 1;
        }
    }
    
    for(int j = tamFita; j > 0; j--){
        if(vetFita[j] == 0) 
            dir[j] = 0;
        else
            dir[j] = dir[j+1] + 1;
    }
    
    // Imprimindo o vetor a esq e a dir de zero
    // Se o numero for maior que nove, imprima 9
    for(int i = 1; i <= tamFita; i++){
        cout << menor(9 , menor(esq[i], dir[i])) << " ";
    }
    
    std::cout << std::endl;
    
    // Para entender o código, analise o vetor esq e dir abaixo:
    
    // cout << " Imprimindo vetor a esq " << endl;
    // for(int i = 1; i <= tamFita; i++)
    //     cout << esq[i] << " ";
        
    // cout << endl;
    
    // cout << " Imprimindo vetor a dir " << endl;    
    // for(int i = 1; i <= tamFita; i++)
    //     cout << dir[i] << " ";
    return 0;
}






