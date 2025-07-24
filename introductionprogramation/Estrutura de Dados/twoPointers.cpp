#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; cin >> n;
    int s[n];
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int i = 0, j = n-1;
    int x; cin >> x;

    while(j > i){
        if(s[i] + s[j] == x){
             cout << "achei" << endl;
             return 0;
        }

        int h = s[i] + s[j];

        if(h > x) j--;
        else i++;
    }

    cout << "Não achei" << endl;
    return 0;
}
