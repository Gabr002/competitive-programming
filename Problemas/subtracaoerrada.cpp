#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkZero(double num){
    double ultAlg = num/10;
    int inteIRO = ultAlg;
    double value = ultAlg - inteIRO;
    
    if(value == 0.0)
        return true;
    else
        return false;
}

int main(){
    int num;
    int iteracoes;
    
    cin >> num;
    cin >> iteracoes;
    
    while(iteracoes > 0){
        if(checkZero(num)){
            num = num/10;
        }else{
           num--;
        }
        iteracoes--;
    }
    std::cout << num << std::endl;
}
