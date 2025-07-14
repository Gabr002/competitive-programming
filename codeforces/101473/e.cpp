#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, r; cin >> n >> r;

    if(n == r){
        cout << "*" << endl;
        return 0;
    }

    vector<int> v(n+1);

    for(int i = 0; i < r; i++){
        int x; cin >> x;
        v[x] = 1;
    }

    for(int i = 1; i <= n; i++)
        if(v[i] != 1) cout << i << " "; 
    
    cout << endl;
    return 0;
}
