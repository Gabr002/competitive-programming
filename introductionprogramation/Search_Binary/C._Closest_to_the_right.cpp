#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll lowerBound(vector<ll>& vector, ll value) {
    ll l=0, r = (ll) vector.size(), pos=0;
    
    while(l < r) {
        ll m = (l+r)/2;

        if(vector[m] < value) l = m+1;
        else r = m;
    }
    pos = l;

    return pos;
}

vector<ll> v;

int main(){
    ll n, k, value;

    cin >> n >> k;

    for(ll i = 0; i < n; i++){
        cin >> value;
        v.push_back(value);
    }
    for(ll i = 0; i < k; i++){
        cin >> value;
        cout << (lowerBound(v, value) + 1) << endl;
    }
}