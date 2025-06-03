#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    cout << n << " ";
    if(n == 1) return 1;
    if(n == 0) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main(){
    int num;

    cin >> num;

    cout << "\n"<< fib(num) << endl;

}