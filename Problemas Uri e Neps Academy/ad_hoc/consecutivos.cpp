#include <iostream>
using namespace std;

int main(){
    
    long int count, somCons = 1, maiorSomaCons = 0, numA, numB;
    
    cin >> count;
    cin >> numA;

    for(int i = 1; i < count; i++){
        
        cin >> numB;
        
        if(numA == numB)
            somCons++;
        else
            somCons = 1;
            
        if(somCons > maiorSomaCons)
                maiorSomaCons = somCons;
        
        numA = numB;

    }

    cout << maiorSomaCons << endl;
}