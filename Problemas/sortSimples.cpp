#include <iostream>
using namespace std;

int main(){
    int vet[3], menor;
    int vet1[3];
    for(int i = 0; i < 3; i++){
        cin >> vet[i]; 
        vet1[i] = vet[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(vet[i] < vet[j]){
                menor = vet[j];
                vet[j] = vet[i];
                vet[i] = menor;
            }
        }
    }
    
    for(int i = 0; i < 3; i++)
        cout << vet[i] << endl;
    
    cout << endl;
    
    for(int i = 0; i < 3; i++)
        cout << vet1[i] << endl;
    
    return 0;
}

