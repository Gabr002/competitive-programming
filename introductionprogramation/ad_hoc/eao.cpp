#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> s_odd, s_even;
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x%2 == 0) s_even.insert(x);
        else s_odd.insert(x);
    }

    for(auto it = s_even.begin(); it != s_even.end(); it++) printf("%d\n", *it);        
    for(auto it = s_odd.rbegin(); it != s_odd.rend(); it++) printf("%d\n", *it);        
}