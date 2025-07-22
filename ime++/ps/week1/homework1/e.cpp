#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000000;

int main(){ _
    int n, y = 0; cin >> n;
    set<int> s;

    bool before = false;

    for(int i = 0; i < n; i++){
        char op; cin >> op;
        int si; cin >> si;
        if(op == '?'){ 
            before = true;
            if(s.lower_bound(si) != s.end()){ 
                y = *s.lower_bound(si);
                cout << *s.lower_bound(si) << endl; 
            }
            else{
                y = -1;
                cout << -1 << endl;
            }
        }
        else{
            if(before){
                int operacao = (si+y)%MOD; 
                s.insert(operacao);
                before = false;
            }else
                s.insert(si);
        }
    }
    return 0;
}
