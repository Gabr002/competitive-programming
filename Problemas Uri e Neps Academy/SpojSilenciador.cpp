#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll, string> m;
const static int PR = 10000019; // Definir o tamanho do hash
#define h(a, b) (a + (b*PR)) // Utilizando tabela hash.
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, a, b;
    string str;
    
    cin >> n;
 
    while (n--) {
        cin >> a >> b >> str;
        m[h(a,b)] = str;
    }
 
    cin >> n;
 
    while (n--) {
        cin >> a >> b;
        cout << m[h(a, b)] << endl;
    }
 
    return 0;
}
 