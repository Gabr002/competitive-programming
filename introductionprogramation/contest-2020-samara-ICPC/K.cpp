#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a, sum;
    multiset<ll> s;

    while(cin >> a) s.insert(a);

    for(auto it = s.begin(); it != s.end(); it++) sum +=*it;

    sum%2==0 ? printf("YES") : printf("NO");

    return 0;
}