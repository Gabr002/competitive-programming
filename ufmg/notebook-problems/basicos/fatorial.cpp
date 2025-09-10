#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e6+3;
 
vector<ll> v(MOD);
 
ll fat(ll N){
    ll value = v[N];
 
    return value%10;
}

int main(){ _
    ll n, instancia = 1, x = 1;
    
    for (int i = 2; i <= MOD; i++){
        x *= i;
        while(x % 10 == 0) x/=10;
        x %= MOD;
        v[i] = x;
    }

    while(scanf("%lld", &n)){
        printf("Instancia %lld\n", instancia++);
        printf("%lld\n", fat(n));
    }
 
    return 0;
}
