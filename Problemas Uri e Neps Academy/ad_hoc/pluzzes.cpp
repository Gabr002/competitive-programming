#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> vt, aux;
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int f;
        cin >> f;
        vt.push_back(f);
    }

    sort(vt.begin(), vt.end());

    for(int i = 0, t = n; t <= m; i++, t++){
        aux.push_back(vt[t-1] - vt[i]);

    }

    sort(aux.begin(), aux.end());

    printf("%d", aux[0]);
}