#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    ll n; cin >> n;
    set<int> si;

    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        si.insert(x);
    }

    cout << si.size() << endl;
    return 0;
}
