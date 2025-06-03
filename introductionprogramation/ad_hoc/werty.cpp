#include <bits/stdc++.h>
using namespace std;

int main(){
    string teclado = " 1234567890-=QWERTYUIOP[ASDFGHJKLZXCVBNM,./", frase = "", saida = "";

    getline(cin, frase);

    for(int i = 0; i < frase.size(); i++){
        for(int j = 0; j < teclado.size(); j++){
            if(frase[i] == teclado[j]){
                if(frase[i] == teclado[0])
                    saida += " ";
                else
                saida += teclado[j-1];
            }
        }
    }

    cout << saida << endl;
}
