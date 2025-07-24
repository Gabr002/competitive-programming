#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    ll n, w, h; cin >> w >> h >> n;
    // condicao x/a*x/b < n
    ll l = 0, r = 1;
    while((r/w)*(r/h) < n) r *= 2;
    while(l < r){
        ll m = (l+r)/2;
        if((m/w)*(m/h) < n) l = m + 1;
        else r = m;
    }

    cout << l << endl;
    return 0;
}
