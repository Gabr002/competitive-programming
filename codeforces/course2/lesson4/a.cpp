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



int main(){ _
    
    int st[4*N], v[N];

    int n, m; scanf(%d%d, &n, &m);

    void build (int p, int l, int r) {
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
    
    return 0;
}
