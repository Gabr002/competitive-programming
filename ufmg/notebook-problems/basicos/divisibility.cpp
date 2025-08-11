#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);
 
    while(t--){
        ll a, b, mv= 0; scanf("%lld%lld", &a, &b);
 
        if(a % b == 0) cout << mv << "\n";
        else cout << b-(a%b) << "\n";
    }    
    return 0;
}
