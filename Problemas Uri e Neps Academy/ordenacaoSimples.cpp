#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    cin >> num;

    int vet[num];

    for(int i = 0; i < num; i++)
        cin >> vet[i];

    sort(vet, vet+num);

    for(int i = 0; i < num; i++)
        cout << vet[i] << " ";

    cout << endl;

}