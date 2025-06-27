#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, m; cin >> n >> m;
    map<int, int> mii;

    while(n--){
        int y; cin >> y;

        for(int i = 0; i < y; i++){
            int x; cin >> x;
            if(mii.empty()){
                mii.insert({x, 0}); 
            }else{
                auto itEnd = --mii.end();
                if(auto itSearch = mii.find(x); itSearch != mii.end()) continue;
                if(x > itEnd->first) mii.insert({x, 0}); 
                else mii.insert({x, 1});
            }
        }
    }

    for(auto& i : mii) cout << i.second << " ";
    cout << endl;

    return 0;
}
