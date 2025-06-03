#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, can = 0;

    cin >> x >> y;

    for(int i = 0; i < x+1; ++i){
        int c = i;
        int f = x - i;
        if((2*c)+(4*f) == y){
            can = 1;
            break;
        }
    }

    printf(can ? "Yes" : "No");
}