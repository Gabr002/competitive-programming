#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, k, l, r, count = 0;
    
    cin >> n;

    vector<ll> a(n);

    for(ll i = 0; i < n; i++) cin >> a[i];
    
    cin >> k;

    for(ll i = 0; i < k; i++){
        cin >> l >> r;
        // cout << lower_bound(a.begin(), a.end(), 5) << " ";
        break;
    }
    
    return 0;
}