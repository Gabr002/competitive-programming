#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, maior;
    
    cin >> num;
    
    while(num != 0){
        if(num > maior){
            maior = num;
        }
        cin >> num;
    }
    std::cout << maior << std::endl;
}