#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MAX = 3e5 + 10;



int main()
{
    int a,b, t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        
        if(a%b==0)
        {
            cout<<"0"<<endl;
            continue;
        }

        if(a<b)
        {
            cout<<b-a<<endl;
            continue;
        }

        int resto = a%b;

        cout<<b-resto<<endl;
    }
    return 0;
}
