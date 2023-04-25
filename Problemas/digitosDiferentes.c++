#include <bits/stdc++.h>
using namespace std;

int check(string str){
    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < str.length(); j++){
            if(str[i] == str[j] && i != j)
                return 1;
        }
    }

    return 0;
}

int main(){
    int num1, num2, count = 0;

    /* pegar o tamanho string de cada um trabalhar com um for em cada um deles. */

    while(cin >> num1 && cin >> num2){ 
        for(int i = num1; i <= num2; i++){
            if(check(to_string(i))){
                continue;
            }else{
                count++;
            }
        }

        cout << count << endl;

        count = 0;
    }
}