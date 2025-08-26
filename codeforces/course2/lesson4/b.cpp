#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int N = 1e5+10;

ll st[4*N], v[N];

void build(ll p, ll l, ll r){
    if(l == r){
        st[p] = v[l];
        return;
    }
    build(2*p, l, (l+r)/2);
    build(2*p+1, (l+r)/2+1, r);
    // st[p] = st[2*p] + st[2*p+1];
    st[p] = min(st[2*p], st[2*p+1]);
    // st[p] = max(st[2*p], st[2*p+1]);
}

ll query(ll p, ll l, ll r, ll i, ll j){
    if(r < i or j < l){ // return 0;
        return INF;
        // return -INF;
    }if(i <= l and r <= j) return st[p];
    ll x = query(2*p, l, (l+r)/2, i, j);
    ll y = query(2*p+1, (l+r)/2+1, r, i, j);
    return min(x, y); 
    // return x+y;
    // return max(x, y);
}

void update(ll p, ll l, ll r, ll x, ll v){
    if(x < l or r < x) return;
    if(l == r and l == x){
        st[p] = v;
        return;
    }

    update(2*p, l, (l+r)/2, x, v);
    update(2*p+1, (l+r)/2+1, r, x, v);
    st[p] = min(st[2*p], st[2*p+1]);
    // st[p] = [2*p] + [2*p+1];
    // st[p] = max(st[2*p], st[2*p+1]);
}

int main(){ _
    int n, m; scanf("%d%d", &n, &m);

    for(int i = 0; i < n; i++){
        ll ai; scanf("%lld", &ai);
        v[i] = ai;
    }

    build(1, 0, n-1); // Index of root = 1

    while(m--){
        int op; scanf("%d", &op);
        if(op == 1){
            ll _n, v; scanf("%lld%lld", &_n, &v); 
            update(1, 0, n-1, _n, v);
        }else{
            ll l, r; scanf("%lld%lld", &l, &r); 
            printf("%lld\n", query(1, 0, n-1, l, r-1));    
        } 
    }

    return 0;
}
