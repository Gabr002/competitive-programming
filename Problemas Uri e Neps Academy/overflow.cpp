#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int value, Q, P, res;

    char op;

    cin >> value;
    cin >> P;
    cin >> op;
    cin >> Q;

    if(op == '*')
        res = P * Q;
    else    
        res = P + Q;

    if(res <= value)
        cout << "OK" << endl;
    else    
        cout << "OVERFLOW" << endl;

}
