#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        ll n; scanf("%lld", &n);
        ll count = 0;
        vector<ll> vi;

        for(ll a = 0; a < n; a++){
            ll ai; scanf("%lld", &ai); 
            vi.pb(ai);
        }
       
        int min_price = vi[n-1];
        for(ll i = n-2; i >= 0; i--){
            if(vi[i] > min_price) count++;

            min_price = min((int) vi[i], min_price);
        }

        printf("%lld\n", count);
        vi.clear();
    }

    
    return 0;
}
