#include <iostream>
using namespace std;

int main(){
    char letra;

    double x, y, res;

    cin >> letra;
    
    cin >> x >> y;

    if(letra == 'D')
        res = x/y;
    else
        res = x*y;
    
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << res << endl;
}