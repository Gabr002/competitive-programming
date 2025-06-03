#include <iostream>

using namespace std;

int main()
{
    int count, quantidade;
    int vet[50];
    cin >> count;
    for(int i = 0; i < count; i++)
        cin >> vet[i];

    for(int i = 0; i < count; i++){
        quantidade = 0;
        quantidade = quantidade + vet[i];
        if(i < count-1)
            quantidade = quantidade + vet[i+1];
        if(i > 0)
            quantidade = quantidade + vet[i-1];
            
        cout << quantidade << endl;
    }
    return 0;
}