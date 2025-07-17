#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<pair<int, int>> v;

bool cmp(auto a, auto b){
    return ((a > b) && (a.first > b.first) || (a.first == b.first && a.second < b.second));
}


int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        int n, xi, yi; scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            scanf("%d%d", &xi, &yi);
            v.push_back({xi, yi});
        }

        sort(v.begin(), v.end(), cmp);

        for(int i = 0; i < n; i++){
            printf("%d %d\n", v[i].first, v[i].second);
        }
    }
    return 0;
}
