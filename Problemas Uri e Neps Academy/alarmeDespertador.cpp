#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, h2, m1, m2, tempo1, tempo2;

    while((cin >> h1 >> m1 >> h2 >> m2) && (h1 != 0 && m1 !=0 && h2 != 0 && m2 != 0)){
        
        tempo1 = h1*60 + m1;
        tempo2 = h2*60 + m2;

        if (tempo1 < tempo2)
        	cout << tempo2-tempo1 << endl;
        else 
        	cout << 1440+(tempo2-tempo1) << endl;
    }
}

