#include <bits/stdc++.h>
using namespace std;

map<string, int> m;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        m[x]++;
    }
    cout << "AC x" << m["AC"] << "\n";
    cout << "WA x" << m["WA"] << "\n";
    cout << "TLE x" << m["TLE"] << "\n";
    cout << "RE x" << m["RE"] << "\n";
}