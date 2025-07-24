#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vt;
    int n, k, m = 0;
    scanf("%d%d", &n, &k);

    for(int i = 0; i < n; i++){
        int p;
        scanf("%d", &p);
        vt.push_back(p);
    }

    sort(vt.begin(), vt.end());

    for(int i = 0; i < k; i++){
        m += vt[i];
    }

    printf("%d\n", m);
}   