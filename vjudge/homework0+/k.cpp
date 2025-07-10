#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll pot(ll value){ 
    return value*value; 
}

int main(){ _
    ll n, cx, cy, r, count = 0; cin >> n >> cx >> cy >> r;
    
    while(n--){
        pair<ll, ll> p;
        cin >> p.first >> p.second;
        if(pot(p.first - cx)+pot(p.second - cy) <= pot(r)) count++;
    }

    cout << count << endl;
    return 0;
}
