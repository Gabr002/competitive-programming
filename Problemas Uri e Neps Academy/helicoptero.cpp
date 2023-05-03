#include <bits/stdc++.h>
using namespace std;

char check(int h, int p){
    if(h < 0) h += 16;
    if(p < 0) p += 16;
    
    return   (h < p) ? 'S' : 'N';
}

int main(){
    int H, P, F, D, p = 0, h = 0;
    
    cin >> H >> P >> F >> D;
    
    h = (H - F)/D;
    p = (P - F)/D;
    
    char resp = check(h, p);
    
    std::cout << resp << std::endl;
} 
