#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> v;


int binary_Search(vector<ll>& vet, ll targ){
    ll l = 0, r = (int) vet.size();

    while(l<=r){
        ll m = (l+r)/2;
        
        if(vet[m] == targ) return 1;
        else if(vet[m] < targ) l = m + 1;
        else r = m-1;
    }

    return 0;
}

int main(){
    ll n, k, targ;
    cin >> n >> k;

    for (ll i = 0; i < n; i++) {
        cin >> targ;
        v.push_back(targ);
    }
    
    for (ll i = 0; i < k; i++)
    {
        cin >> targ;
        if(binary_Search(v, targ)) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}