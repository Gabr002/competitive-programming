#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; cin >> t;

    while(t--){
        int n, s, r, mod = 0; cin >> n >> s >> r;
        
        vector<int> vi;
        int mx = s-r;
        
        mod = r%(n-1);
        r -= mod;
        int value = r/(n-1);

        for(int i = 0; i < n-1; i++) vi.pb(value);

        for(int i = 0; i < mod; i++) vi[i] = min(mx, vi[i]+1);

        vi.pb(mx);

        for(auto& i : vi) cout << i << " ";
        cout << endl;

        vi.clear();
    }
    return 0;
}
