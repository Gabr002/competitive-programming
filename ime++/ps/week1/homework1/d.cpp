#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, t, c1, c2; cin >> n;
    
    map<pair<int,int>, string> m;

    for(int i = 0; i < n; i++){ 
        string str;
        cin >> c1 >> c2 >> str;
        m[{c1, c2}] = str;
    }

    cin >> t;

    while(t--){
        cin >> c1 >> c2;
        cout << m[{c1, c2}] << endl;
    }

    return 0;
}
