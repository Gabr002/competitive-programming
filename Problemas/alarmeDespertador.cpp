#include <bits/stdc++.h>
using namespace std;
#define H1 23
#define M1 59
#define H2 23
#define M2 59

int main(){
    int h1[H1], h2[H2], m1[M1], m2[M2], i = 0;
    int minutos = 0;

    while(cin >> h1[i] >> m1[i] >> h2[i] >> m2[i]){
        
        while(h1[i] != h2[i] || m1[i] != m2[i]){    
            if(h1[i] != h2[i])
                h1[i]++;
            
            minutos++;    

            if(m1[i] != m2[i])
                m1[i]++;

            if(h1[i] == 24 || m1[i] == 60){
                    h1[i] = 0;
                    m1[i] = 0;
            }

                    
        }

        cout << minutos << endl;

        minutos = 0;
    }
}

