#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

// const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; scanf("%d", &n);
    vector<ll> vi, ordv;
    vector<pair<ll, ll>> vp;

    for(int i = 0; i < n; i++){
        ll x; scanf("%lld", &x);
        vi.push_back(x);
    }    
    
    ordv = vi;
    
    sort(ordv.begin(), ordv.end());
    
    for(ll i = 0; i < n; i++){
        if(vi[i] != ordv[i]){
            for(ll j = i+1; j < n; j++){
                if(vi[j] == ordv[i]){ 
                    swap(vi[i], vi[j]);
                    vp.push_back(make_pair(i, j));
                    break;
                }
            }
        }else 
            continue;
    }
    
    // print vp
    printf("%ld\n", vp.size());
    for(auto it : vp){
        printf("%lld %lld\n", it.first, it.second);
    }
    return 0;
}
