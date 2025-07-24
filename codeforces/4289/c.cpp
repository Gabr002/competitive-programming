#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool suficiente(ll mid, ll n, ll q){
    ll sum = (n+(n-mid+1))*mid/2;

    return sum >= q;
}


ll BS(ll n, ll targ){
    ll l = 1, r = n, Sn = 0, ans = 0;

    Sn = ((n+1)*n)/2; 
    if(Sn < targ) return 0;
    else if(n >= targ) return 1; 
        
    while(l < r){
        ll mid = (l+r)/2;        
        if(suficiente(mid, n, targ)){ 
           r = mid;
        }
        else{ 
            l = mid + 1;
        }
    }

    return l;
}

int main(){ _
    ll K, N, Q; cin >> K;  

    while(K--){ 
        cin >> N >> Q;
        ll resp = BS(N, Q);
        if(resp) cout << resp << endl;   
        else cout << "IMPOSSIVEL" << endl;
    }

    return 0;
}
