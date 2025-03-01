#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, w, h;

    scanf("%lld%lld%lld", &w, &h, &n);

    // Condicao para descartar:
    ll l = 0, r = 1;

    while((r/w) * (r/h) < n) r*=2;
    while(l < r){
        ll m = (l+r)/2;
        if((m/w) * (m/h) < n) l = m + 1;
        else r = m; 
    } 

    printf("%lld\n", l);
}