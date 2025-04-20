#include <iostream>
using namespace std;

int main(){
    double count = 6, num, sum, sumMedia;

    while(count--){
        cin >> num;

        if(num > 0){
            sum++;
            sumMedia += num;
        }
    }

    cout << sum << " valores positivos" << endl;
    
    cout.precision(1);
    cout.setf(ios::fixed);
    
    cout << sumMedia/sum << endl;
    return 0;
}