#include <bits/stdc++.h>
using namespace std;


int main(){
    
    long long int N, M, count = 0, repetido = 0;

    while((cin >> N >> M) && (N != 0 && M != 0)){
        int vetor[10000];
        set<int> num;

        for(int i = 0; i < M; i++){
            cin >> vetor[i];
            for(int j = 0; j < i; j++){
                if(vetor[i] == vetor[j])
                    num.insert(vetor[i]);
            }
        }

        cout << num.size() << endl;

        count = 0;
    }

}
