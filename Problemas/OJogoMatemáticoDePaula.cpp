#include <bits/stdc++.h>
using namespace std;

int main(){

    int num, a = 0, b = 0, count = 1;
    
    cin >> num;
    
    while(num--){
        string var;
        count = 0;
        cin >> var;
        
        for(int i = 48; i < 58; i++){
            
            if((int)var[0] == i)
                a = count;
            if((int)var[2] == i)
                b = count;
             
            count++;
        }

        if(a == b)
            cout << a*b << endl;
        else if((int)var[1] < 91)
            cout << (b-a) << endl;
        else
            cout << (a+b) << endl;
    }
}