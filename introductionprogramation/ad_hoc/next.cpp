#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const unsigned int MOD = 1e9;

set<ll> s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, y = 0;
    bool buul = false;
    set<ll> s;
    set<ll>::iterator itlow, itup;

    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c == '+'){
            if(buul){
                ll x;
                cin >> x;
                s.insert((x+y)%MOD);
                buul = false;    
            }else{
                ll x;
                cin >> x;
                s.insert(x);
            }
        }else if(c == '?'){
            ll x;
            cin >> x;
            itlow = s.lower_bound(x);
            itup = s.upper_bound(x);
            if(*itlow >= x){ 
                cout<< *itlow << endl;
                y = *itlow;
            }
            else if(*itup > x){ 
                cout<< *itup << endl;
                y = *itup;
            }
            else{ 
                cout<< -1 << endl;
                y = -1;
            }
            buul = true;
        }
    }
}
