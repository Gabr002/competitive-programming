#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int unsigned MOD = 1e6;

ll fat(ll N){
    long long x = 1;

    for (int i = 2; i <= N; i++){
        x *= i;
        while (x % 10 == 0) x /= 10;   
        x %= MOD;
    }

    return x%10;
}

int main(){ _
    int n; scanf("%d", &n);

    printf("%lld\n", fat(n));
    return 0;
}
