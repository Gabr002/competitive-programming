#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

/*

prefixos
l
lo
lov
love
lovel
lovely

sufixos
y
ly
ely
vely
ovely
lovely

*/

int main(){ _
    int t; cin >> t;
    
    if(t == 1){
        string str; cin >> str;
        cout << str.size() << "\n";
        return 0;
    }

    string a, b; cin >> a >> b;
    int resp = a.size()+b.size();
    
    // Caso 3 - Uma string está contida em outra.
    // Bizuh 
    if(a.size() > b.size()) swap(a, b);
    for(int i = 0; i <= b.size() - a.size(); i++){
        string substring_b;

        for(int j = i; j < i + a.size(); j++){
            // cout << i << " " << j << "\n";
            substring_b.push_back(b[j]);
        }

        if(substring_b == a) resp = min(resp, (int) b.size());
    }

    // Caso 2 - O sufixo do segundo e o prefixo do primeiro.
    for(int i = 0; i < a.size(); i++){
        string prefix_a;
        for(int j = 0; j <= i; j++){
            prefix_a.push_back(a[j]); 
        }
        
        string suffix_b;
        for(int j = b.size()-prefix_a.size(); j < b.size(); j++){
            suffix_b.push_back(b[j]);
        }
        
        if(prefix_a == suffix_b) resp = min(resp, (int) (a.size() + b.size() - suffix_b.size()));
    }

    // Caso 1 - O sufixo do primeiro e o prefixo do segundo;         
    for(int i = 0; i < b.size(); i++){
        string prefix_b;
        for(int j = 0; j <= i; j++){
            prefix_b.push_back(b[j]); 
        }
        
        string suffix_a;
        for(int j = a.size()-prefix_b.size(); j < a.size(); j++){
            suffix_a.push_back(a[j]);
        }
        
        if(prefix_b == suffix_a) resp = min(resp, (int)(b.size() + a.size() - suffix_a.size()));
    }

    cout << resp << "\n";
    return 0;
}
