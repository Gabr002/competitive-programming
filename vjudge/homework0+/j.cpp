#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; cin >> t;

    while(t--){
        int x = 0, n, s, r, y = 0; cin >> n >> s >> r;
        
        vector<int> vi;
        x = s-r;  
        r -= x;
        n--;
        vi.pb(x);

        while(n){
            y = r - x; 
            if(y < n) x--;
            else{
                vi.pb(x);
                n--;
                r-=x;
            }
        }
        for(int i = 0; i < vi.size(); i++) cout << vi[i] << " ";
        cout << endl;
        
        x = 0; n = 0, s = 0, r= 0, y = 0;
        vi.clear();
    }
    return 0;
}
