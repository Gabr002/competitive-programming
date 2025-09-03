#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int q; scanf("%d", &q);

    while(q--){
        ll n; scanf("%lld", &n);

        if(n==2) printf("%d\n", 2);
        else if(n%2!=0) printf("%d\n", 1);
        else printf("%d\n", 0);
    }
    return 0;
}
