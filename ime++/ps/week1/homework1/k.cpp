#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; cin >> t;
    bool check = false;
    string _template, str_guardada;

    while(t--){
        string str; cin >> str;
        
        if(!_template.empty()){
            str_guardada = _template;
            check = true;
            for(int i = 0; i < _template.size(); i++){
                for(int j = 0; j < str.size(); j++){
                    if(i < _template.size()-1 && j < str.size()-1){
                        //if(str[j] == _template[i] && str[j+1] ==  _template[i+1]){ 
                        if(str[j] == _template[i]){
                            // Construir substrings
                        }
                    }
                }
            }
            str_guardada += str;
        }else{
            _template = str;
        }
    }

    if(check) cout << str_guardada.size() << "\n";
    else cout << _template.size() << "\n";
    return 0;
}
