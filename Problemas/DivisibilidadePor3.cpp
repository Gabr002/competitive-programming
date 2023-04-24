#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0, somaDosAlgarismos = 0, tam = 0;
    string str;
    
    while(cin >> tam && cin >> str){
        for(int i = 0; i <= tam - 1; i++){
            
            for(int j = 48; j < 58; j++){
                
                if((int)str[i] == j)
                    somaDosAlgarismos += count;

                count++;
            }

            count = 0;
        }

        if(somaDosAlgarismos  % 3 == 0)
            cout << somaDosAlgarismos << " sim" << endl;
        else
            cout << somaDosAlgarismos << " nao" << endl;

        somaDosAlgarismos = 0;
    }
}