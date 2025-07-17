#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        int n, xi, yi; scanf("%d", &n);
        vector<pair<int, int>> ordv(n); 
        vector<int> cnt(n);

        for(int i = 0; i < n; i++){
            scanf("%d%d", &xi, &yi);
            cnt[xi]++;
            ordv[i].second = yi;
        }

        int cur = 0;

        for(int i = 0; i < cnt.size(); i++){
            while(cnt[i]){
                ordv[cur].first = i;
                cur++;
                cnt[i]--;
            }
        }

        for(int i = 0; i < n; i++) printf("%d %d\n", ordv[i].first, ordv[i].second);
    }
    return 0;
}
