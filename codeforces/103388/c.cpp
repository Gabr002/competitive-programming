#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int pot(int e){
    
    int p = 1;
    for(int i = 1; i <= e; i++){
        p*=10;
    }

    return p;
}

int form_number(vector<int>& v, int tam){
    int number_ = 0;
    for(int i = 0; i < tam; i++){
        number_ += v[tam-i-1]*pot(i);
    }
    
    return number_;
}

int main(){ _
    int b, l, number = 0; cin >> b >> l;
    vector<int> vi;
    
    for(int i = 0; i < l; i++){
        int di; cin >> di;
        vi.push_back(di);
    }
    
    number = form_number(vi, l);

    int mod = number%(b+1);
    
    for(int i = 0; i < l; i++){

        if(vi[l-i-1] >= mod){
            vi[l-i-1] -= mod;
            number = form_number(vi, l);
            if(number%(b+1)==0){
                cout << l-i << vi[l-i-1] << endl;
                break;
            }
        }
    }

    cout << -1 << -1 << endl;
    return 0;
}
