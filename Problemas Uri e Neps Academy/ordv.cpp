#include <bits/stdc++.h>
using namespace std;

vector<int> vt;

int inputProblem(){
    string n;
    getline(cin, n);

    for(int i = 0; i < n.length(); i++){
        int x = n[i];
        if(x > 47 && x < 58)
            vt.push_back(x-'0');
    }

    for(int i = 0; i < vt.size(); i++) cout << vt[i] << " ";

    return 0;
}   

int main(){
    inputProblem();
}

