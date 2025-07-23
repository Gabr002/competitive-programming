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
        }
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
            for(int it = 0; i < max(a.size(), b.size()); i++){
                if(a.size()>b.size()){
                    if(it < a.size()-1){
                        if(a[it] == b[at])
                    }
                }else{
                    if(it < b.size()-1){
                        if(b[it] == a[at])
                    }
                }
            }
        }
   }
   return 0;
}
