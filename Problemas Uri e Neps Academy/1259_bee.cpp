#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> pares, impares;
    int n, value = 0;    

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> value;
        if(value%2==0) pares.insert(value);
        else impares.insert(value);
    }

    for(auto it = pares.begin(); it != pares.end(); it++) cout << *it << endl;

    for(auto it = impares.rbegin(); it != impares.rend();it++) cout << *it << endl;
}