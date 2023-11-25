#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // Definir o long long

ll n, w, h, resp = 0;

int main(){
    cin >> w >> h >> n;

    // Condição para descartar: x/a * x/b < n
    ll l = 0, r = 1;
    while((r/w)*(r/h) < n) r *= 2;

    while(l < r){
        ll m = (l+r)/2;
        if((m/w) * (m/h) < n) l = m + 1;
        else r = m;
    }

    resp = l;
    cout << resp << endl;
}