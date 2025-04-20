#include <iostream>
using namespace std;

int main(){
    int nBandejas, nCopos, nLatas, totQ = 0;
    
    cin >> nBandejas;
    
    while(nBandejas--){
        cin >> nLatas >> nCopos;
        if(nLatas > nCopos)
            totQ += nCopos;
    }  
    cout << totQ << endl;
}