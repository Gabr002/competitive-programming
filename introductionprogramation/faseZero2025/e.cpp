#include <bits/stdc++.h>
using ll=long long;
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x = 1, y, k;

    cin >> y >> k;

    while(k--) x+=gcd(x,y);

    cout << x << endl;

    return 0;
}
