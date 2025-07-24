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
    set<int> si;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        si.insert(x);
    }

    auto it = next(si.begin(), 1);

    if (it != si.end()) cout << *it << endl;
    else cout << "NO";

    return 0;
}
