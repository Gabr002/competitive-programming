#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef pair<int, int> tipo;
typedef long long ll;
const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool cmp(tipo a, tipo b){
    if(a.first != b.first) return a.first < b.first;

    return a.second > b.second;
}


int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        int n; scanf("%d", &n);
        ll xi, yi;
        vector<pair<ll, ll>> v;
        
        for(int i = 0; i < n; i++){
            scanf("%lld%lld", &xi, &yi);
            v.push_back({xi, yi});
        }

        sort(v.begin(), v.end(), cmp);

        for(int i = 0; i < n; i++){
            printf("%lld %lld\n", v[i].first, v[i].second);
        }
    }
    return 0;
}
