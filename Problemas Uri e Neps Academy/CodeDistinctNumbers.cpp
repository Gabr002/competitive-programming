#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long x;
    set<long long> s;

    cin >> n;

    while (n--)
    {
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;
}