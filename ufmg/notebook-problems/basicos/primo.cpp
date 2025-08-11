#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; cin >> n;

    bool primo = true;
 
    for(ll j = 2; j*j <= n; j++ ){
        if(n % j == 0) primo = false;
    }

    if(primo) cout << "sim" << "\n";
    else cout << "nao" << "\n";
    return 0;
}
