#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, s, t, b = 0, count = 0, Sb = 0, n = 0, Sn = 0;
    vector<int> v;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &m, &s);

        for(int i = 0; i < m; i++){ // elementos que já tem no vetor
            int b;
            scanf("%d", &b);
            v.push_back(b);
        }

        for(int i = 1; i <= s; i++){
            auto it = find(v.begin(), v.end(), i);
            if(it != v.end()){
                continue;
            }else{
                count += i;
                v.push_back(i);
                if((count)+(i+1) > s) break;
            }
        }

        for(int i = 0; i < v.size(); i++) Sb += v[i];

        n = v.size();

        Sn = (n*(n+1))/2;

        if(count != s || Sb != Sn) printf("NO\n");
        else printf("YES\n");

        b = 0, count = 0, Sb = 0, n = 0, Sn = 0;
        v.clear();
    }
}