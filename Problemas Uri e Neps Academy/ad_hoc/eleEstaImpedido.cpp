#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, D;

    while((cin >> A >> D) && (A != 0 && D != 0)){
        string resp;
        resp = 'N';
        int vetA[10000], vetD[10000], count = 0;

        for(int i = 0; i < A; i++)
            cin >> vetA[i];

        for(int i = 0; i < D; i++)
            cin >> vetD[i];

        for(int i = 0; i < A; i++){
            for(int J = 0; J < D; J++){
                if(vetA[i] < vetD[J])
                    count++;
            }
            if(count >= D-1)
                resp = 'Y';

            count = 0;
        }

        cout << resp << endl;
    }
}