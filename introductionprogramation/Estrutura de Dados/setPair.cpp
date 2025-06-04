#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    map<int, char> m;
    m[2] = 'b';
    m[1] = 'a';

    for(auto i : m) cout << i.f << " " << i.s << endl;   
    return 0;
}
