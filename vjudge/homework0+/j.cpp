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
        int x = 0, n, s, r, y = 0, mod = 0; cin >> n >> s >> r;
        
        vector<int> vi;
        int mx = s-r;
        
        if(r%(n-1) == 0){
            int value = r/(n-1);
            for(int i = 0; i < (n-1); i++) vi.pb(value);

            vi.pb(mx);
            
            for(auto& i : vi) cout << i << " ";
            cout << endl;
        }else{
            int mod = r%(n-1);
            mod = r - mod;
            int value = mod/(n-1);

            for(int i = 0; i < (n-1); i++) vi.pb(value);
           
            for(int i = 0; i < mod; i++){
                if(mod + vi[i] > mx){
                    vi[i] = ;
                }else{ 
                    mod = mod - mx + vi[i];
                    vi[i] += mod; 
                    mod--;
                }
            }
            
            vi.pb(mx);

            for(auto& i : vi) cout << i << " ";
            cout << endl;
        }

        vi.clear();
    }
    return 0;
}
