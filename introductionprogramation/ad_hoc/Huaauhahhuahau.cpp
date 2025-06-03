#include <bits/stdc++.h>
using namespace std;

int main(){
    string risada, comb1 = "", comb2 = "";

    cin >> risada;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' || risada[i] == 'e' ||risada[i] == 'i' ||risada[i] == 'o' ||risada[i] == 'u')
            comb1 += risada[i];
    }

    for(int i = comb1.size() - 1; i >= 0; i++)
        comb2 += comb1[i];
    
    if(comb1 == comb2)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}