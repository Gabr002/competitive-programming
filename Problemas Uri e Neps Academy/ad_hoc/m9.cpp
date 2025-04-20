#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int y=0;

    cin >> n;

    for(int i = 0; i < n.size(); i++){
        y += (n[i]-'0');
    }

    y%9==0 ? cout << "Yes" : cout << "No";

    return 0;
}