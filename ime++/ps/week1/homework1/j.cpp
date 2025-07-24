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
        string a, b; cin >> a >> b;
        bool check = true;

        if(a == b){
            cout << "YES\n";
            cout << a << "\n";
        }else if(a[0] == b[0]){
            cout << "YES\n"; 
            cout << a[0] << "*" << "\n";
        }else if(a[a.size()-1] == b[b.size()-1]){
            cout << "YES\n";
            cout << "*" << a[a.size()-1] << "\n";
        }else{
            for(int i = 0; i < a.size(); i++){
                for(int j = 0; j < b.size(); j++){
                    if(i < a.size()-1 && j < b.size()-1){
                        if(a[i] == b[j] && a[i+1] == b[j+1]){
                            cout << "YES\n";
                            cout << "*" << a[i] << a[i+1] << "*\n";
                            check = false;
                            i = a.size();
                            j = b.size();
                        }
                    }
                }
            }
            if(check) cout << "NO\n";
        }
    }
    return 0;   
} 

