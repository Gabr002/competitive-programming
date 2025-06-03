#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie();

    string str;
    set<string> set_;

    while(cin >> str) set_.insert(str);
    cout << set_.size() << endl;
}