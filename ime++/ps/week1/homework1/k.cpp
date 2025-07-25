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
    string _template, str_guardada;

    while(t--){
        string str; cin >> str;
        
        if(!_template.empty()){
            str_guardada = _template;
            for(int i = 0; i < _template.size(); i+=2){
                for(int j = 0; j < str.size(); j+=2){
                    if(i < _template.size()-1 && j < str.size()-1){
                        cout << i << j << "\n";
                        if(str[j] == _template[i] && str[j+1] ==  _template[i+1]) continue;
                        else{
                            str_guardada.push_back(str[j]);
                            str_guardada.push_back(str[j+1]);   
                        }
                    }
                }
            }
        }else{
            _template = str;
        }
    }

    cout << str_guardada.size() << "\n";
    cout << str_guardada << "\n";
    return 0;
}
