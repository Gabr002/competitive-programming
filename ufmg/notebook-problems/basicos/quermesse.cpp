#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, t = 1;
    vector<int> vi;
    while(cin >> n && n != 0){
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            vi.push_back(x);
        }

        for(int i = 1; i <= n; i++){
            if(vi[i-1] == i){
                cout << "Teste " << t << "\n";
                cout << i << "\n";
            }
        }

        t++;
        vi.clear();
    }    
    return 0;
}
