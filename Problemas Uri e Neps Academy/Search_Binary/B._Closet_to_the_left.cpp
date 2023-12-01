#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> vet;

ll UB(vector<ll>& vet, ll targ){
    ll l = 0, r = (int) vet.size(), pos = 0;
    
    while(l < r){
        ll m = (l+r)/2;
        if(vet[m] <= targ) l = m + 1;
        else r = m;
    }
    pos = l;

    return pos;
}

int main(){
    ll size_vet_one, size_vet_two, value;

    cin >> size_vet_one >> size_vet_two;

    for(ll i = 0; i < size_vet_one; i++){
        cin >> value;
        vet.push_back(value);
    }

    for(ll i = 0; i < size_vet_two; i++){
        cin >> value;
        cout << UB(vet, value) << endl;
    }
}