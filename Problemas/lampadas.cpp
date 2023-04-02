#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A = 0, B = 0, num;
    cin >> N;
    while(N > 0){
        
        cin >> num;
        
        if(num == 1){
            if(A == 0)
                A = 1;
            else
                A = 0;
        }
        else{
            if(A == 0)
                A = 1;
            else
                A = 0;
                
    
            if(B == 0)
                B = 1;
            else
                B = 0;
        }
        N--;
    }
    std::cout << A << std::endl;
    std::cout << B << std::endl;
}