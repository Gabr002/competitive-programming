#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t, _begin = 0, _end = 0; cin >> t;
    bool check = false, check_begin = true, check_end = false, check_erase = false;
    string _template, str_guardada;

    while(t--){
        string str; cin >> str;
        
        if(!_template.empty()){
            str_guardada = _template;
            check = true;
            for(int i = 0; i < _template.size(); i++){
                for(int j = 0; j < str.size(); j++){
                    if(str[j] == _template[i] && str[j+1] ==  _template[i+1] && check_begin){
                        _begin = j;
                        check_begin = false; // Até que encontre o check_end.
                        check_end = true; // Até que ache o ultimo j+1;
                        break; // Para ele percorrer o proximo
                    }else if(str[j] == _template[i] && str[j+1] ==  _template[i+1] && check_end && str[j+2] !=  _template[i+2]){
                        _end = j+1;
                        check_begin = true; // Nova procura.
                        check_end = false; // Até que ache o proximo begin;
                        check_erase = true;
                        i = 0;
                        break;
                    }else if(i == _template.size()-1 && str[j] == _template[i] && str[j-1] ==  _template[i-1]){
                        _end = j;
                        check_erase = true;
                    }
                }
                if(check_erase){ 
                    str.erase(_begin, _end-_begin+1);
                    check_erase = false;
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
