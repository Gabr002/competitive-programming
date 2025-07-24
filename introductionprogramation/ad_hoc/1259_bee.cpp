#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> pares, impares;
    int n, target = 0;    

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> target;
        if(target%2==0) pares.insert(target);
        else impares.insert(target);
    }

    for(auto it = pares.begin(); it != pares.end(); it++) cout << *it << endl;

    for(auto it = impares.rbegin(); it != impares.rend();it++) cout << *it << endl;
}