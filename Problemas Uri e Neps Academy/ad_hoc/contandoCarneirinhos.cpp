#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, tam, valor;

    cin >> num;

    while(num--){
        
        cin >> tam;

        set<int> num;

        for(int i = 0; i < tam; i++){
            cin >> valor;
            num.insert(valor);
        }
            
        cout << num.size() << endl;
    }
}