#include <bits/stdc++.h>
using namespace std;

// AA
// 1 x 26¹ + 1 x 26⁰ = 27
int pot(int e){
    if(e == 0) return 1;
    int p = 1;
    for(int i = 1; i <= e; i++){
        p *= 26;
    }    

    return p;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int sum = 0;
    cin >> s;
    
    for(int i = 0, e = s.size()-1; i < s.size(); i++, e--){
        int id = s[i];
        sum += (id-64)*pot(e);
    }

    cout << sum << endl;

    return 0;
}