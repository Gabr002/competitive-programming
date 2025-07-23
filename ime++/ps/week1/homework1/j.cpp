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
        string a, b, _template; cin >> a >> b;
        if(a == b){
            cout << "YES\n";
            cout << a << "\n";
        }else if(a.size() == b.size()){
            if(a[0] == b[0] && a[a.size()-1] == b[b.size()-1]){
                cout << "YES\n";
                cout << a[0] << '*' << b[b.size()-1] << "\n";
            }else if(a[0] == b[0]){
                cout << "YES\n";
                cout << a[0] << '*' << "\n";
            }else if(a[a.size()-1] == b[b.size()-1]){
                cout << "YES\n";
                cout << '*' << a[a.size()-1] << "\n"; 
            }else{
                _template.pb('*');
                int cnt = 0;
                for(int it = 0; i < a.size(); i++){
                    if(it < a.size()-1){
                        if(a[it] == b[it] && a[it+1] == b[it+1]){
                            _template.pb(a[it]);
                            _template.pb(a[it+1]);
                            _template.pb('*');
                            break;
                        }
                    }
                }
            }
        }
   }
   return 0;
}
