#include <iostream>
using namespace std;

int positivoOuNegativo(int num){
    if(num > 0)
        return 1;
}

int parOuimpar(int num){
    return (num % 2 == 0);
}

void main(){
    
    int count = 5, 
    num = 0, 
    positivo = 0, 
    negativo = 0, 
    par = 0, 
    impar = 0;

    while(count--){
        
        cin >> num;

        if(parOuimpar(num)){
            par++;
            if(positivoOuNegativo(num))
                positivo++;
            else
                negativo++;
        }else{
            impar++;
            if(positivoOuNegativo(num))
                positivo++;
            else
                negativo++;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
}