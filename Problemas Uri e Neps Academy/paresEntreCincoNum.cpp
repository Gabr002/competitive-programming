#include <iostream>
using namespace std;

int main(){
    
    int count = 5, num, sum;

    while(count--){
        
        cin >> num;

        if(num % 2 == 0)
            sum++;
        
    }

    cout << sum << " valores pares" << endl;

    return 0;
}