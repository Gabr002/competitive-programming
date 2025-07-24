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
    vector<int> vi(n), ordv(n);

    for(int i = 0; i < n; i++){ cin >> v[i]; ordv[i] = v[i]; }
    
    sort(ordv.begin(), ordv.end());

    map<int, int> novoidx;

    for(int i = 0; i < n; i++) novoidx[ordv[i]] = i;

    for(int i = 0; i < n; i++) v[i] = novoidx[v[i]];

    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl; 
    return 0;
}
