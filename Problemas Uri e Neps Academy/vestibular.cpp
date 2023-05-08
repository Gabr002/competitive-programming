#include <bits/stdc++.h>
using namespace std;

int main(){
    int tam, count = 0;

    string gabarito, alternativas;
    
    cin >> tam;

    cin >> gabarito >> alternativas;

    for(int i = 0; i < tam; i++){
        if(gabarito[i] == alternativas[i])
            count++;
    }

    cout << count << endl;
}