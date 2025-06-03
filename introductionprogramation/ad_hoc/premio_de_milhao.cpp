#include <iostream>

using namespace std;

int main()
{
    int totDias, acess = 0, nDay = 0, totAcess = 0;
    
    cin >> totDias;
    
    while(totDias--){
        cin >> acess;
        totAcess += acess;
        nDay++;
        if(totAcess >= 1000000)
            break;
    }
    cout << nDay << endl;
    return 0;
}