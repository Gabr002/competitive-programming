#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

/**********************************************************************************
* SEGMENT TREE (QUICK RANGE SUM / RANGE UPDATE)                                   *
* Description: The segment tree stores subarray answers in a tree-like fashion,   *
* in such a way we can query and update ranges in O(logN) time.                   *
* Time complexity: <O(NlogN), O(logN)>                                            *
* Usage: update(1, 1, n, pos, val), query(1, 1, n, l, r), build(1, 1, n)          *
* Notation: st: array which stores the segment tree                               *
*           v: vector being represented in the segment tree                       *
*           p: node index (NOT to confuse with the array index)                   *
**********************************************************************************/

const int N = 100010;

// v -> array       st -> array seg tree
ll st[4*N], v[N];

// 
void build (ll p, ll l, ll r) {
    if (l == r) {
        st[p] = v[l];
        return;
    }
    build (2*p, l, (l+r)/2);
    build (2*p+1, (l+r)/2+1, r);
    st[p] = st[2*p]+st[2*p+1];
    // st[p] = min(st[2*p], st[2*p+1]);
    // st[p] = max(st[2*p], st[2*p+1]);
}

ll query (ll p, ll l, ll r, ll i, ll j) {
    if (r < i or j < l) return 0;
    // return INF;
    // return -INF;
    if (i <= l and r <= j) return st[p];
    ll x = query(2*p, l, (l+r)/2, i, j);
    ll y = query(2*p+1, (l+r)/2+1, r, i, j);
    return x+y;
    // return min(x, y);
    // return max(x, y);
}

void update (ll p, ll l, ll r, ll x, ll v) {
    if (x < l or r < x) return;
    if (l == r and l == x) {
        st[p] = v;
        return;
    }
    update (2*p, l, (l+r)/2, x, v);
    update (2*p+1, (l+r)/2+1, r, x, v);
    st[p] = st[2*p] + st[2*p+1];
    //st[p] = min(st[2*p], st[2*p+1]);
    //st[p] = max(st[2*p], st[2*p+1]);
}

int main(){ _
    
    ll n, m; scanf("%lld%lld", &n, &m);
    
    for(ll i = 0; i < n; i++){
        ll x; scanf("%lld", &x); 
        v[i] = x;
    }    

    build(1, 0, n-1);

    while(m--){
        ll op; scanf("%lld", &op);
        if(op == 1){
            ll i, v; scanf("%lld%lld", &i, &v);
            update(1, 0, n-1, i, v);
        }
        else{
             ll l, r; scanf("%lld%lld", &l, &r);
             printf("%lld\n", query(1, 0, n-1, l, r-1));
        }
    }
    return 0;
}
