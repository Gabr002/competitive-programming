#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    int gold=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>a;
        if (a>i)
        {
            gold+=a-i;
        }
        
    }
    cout<<gold<<"\n";
    
}