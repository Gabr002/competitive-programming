#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<string> str;
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        str.push_back(s);
    }

    sort(str.begin(), str.begin()+k);

    for(int i = 0; i < k; i++) cout << str[i] << endl;
}