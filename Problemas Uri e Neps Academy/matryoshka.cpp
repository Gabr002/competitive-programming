#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int num, count = 0, countIndice = 0;

    cin >> num;

    int vet[num], vetAux[num], vetAuxResult[num];

    for(int i = 0; i < num; i++)
        cin >> vet[i];

    for(int i = 0; i < num; i++)
        vetAux[i] = vet[i];
    
    sort(vet, vet+num);

    for(int i = 0; i < num; i++){
        if(vet[i] == vetAux[i])
            continue;
        else{
            count++;
            vetAuxResult[countIndice++] = vetAux[i];
        }
    }

    sort(vetAuxResult, vetAuxResult+countIndice);

    if(count == 0){
        cout << count << endl;
    }
    else{
        cout << count << endl;

        for(int i = 0; i < count; i++)
            cout << vetAuxResult[i] << " ";

        cout << endl;
    }
    
}