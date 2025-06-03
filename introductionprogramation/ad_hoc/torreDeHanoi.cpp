#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int Hanoi(int N){
	if(N == 1) return 1;
    return 2*Hanoi(N-1)+1;/* Busca pelo n-1 */
}


int main(){
    int num, teste = 0;

    while(1){
        teste++;

        cin >> num;

        if(num == 0)
            break;

        cout << "Teste " << teste << endl;

        cout << Hanoi(num) << endl;
    }
}