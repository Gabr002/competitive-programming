#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second
 
typedef long long ll;
 
// const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
ll bs(vector<ll>& vi, ll targ){
    ll l = 0, r = vi.size()-1, pos = -1;
    
    while(l<=r){
        ll mid = (l+r)/2;
        if(vi[mid] == targ){
            pos = mid;
            r = mid - 1;
        }
        else if(vi[mid] < targ) l = mid+1;
        else r = mid - 1;
    }
    
    return pos;
}
 
int main(){ _
    ll n, q; scanf("%lld%lld", &n, &q);
    vector<ll> vi;
    
    for(int i = 0; i < n; i++){
        ll ai; scanf("%lld", &ai);
        vi.push_back(ai);
    }  
 
    while(q--){
        ll s; scanf("%lld", &s);
        printf("%lld\n", bs(vi, s));
    }
    return 0;
}
