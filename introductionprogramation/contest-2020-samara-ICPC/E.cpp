#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b,  m=0, vida =0;
    vector<int>a;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>b;
        a.push_back(b);
    }
    if (a[0]<0){
        m=a[0]*(-1);
    }
    else vida=m=a[0];

    for (int i = 1, j=2; i < n-2; i++, j++)
    {
        if (a[i]+a[j]<0)
        {
            m+= -1*(a[i]+a[j]);
        }

    }
    cout<<m<<endl;
    
    return 0;
}