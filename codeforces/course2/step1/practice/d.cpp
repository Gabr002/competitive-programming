#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    ll n, k; cin >> n;
    vector<int> vi(n);

    for(auto& i : vi) cin >> i; 
    
    sort(vi.begin(), vi.end());                                              
 
    cin >> k;
    while(k--){
        ll l, r; 
        cin >> l >> r;
        auto itLeft = lower_bound(vi.begin(), vi.end(), l);
        auto itRight = upper_bound(vi.begin(), vi.end(), r);
        cout << itRight - itLeft << endl;
    }
    return 0;
}



