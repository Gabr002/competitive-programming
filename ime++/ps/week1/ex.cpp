#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

map<string, int> msi;


int main(){ _
    int n; cin >> n;

    for(int i = 0; i <n; i++){
        string x; cin >> x;
        msi[x]++;
    }

    cout << "AC x " << msi["AC"] << "\n";
    cout << "WA x " << msi["WA"] << "\n";
    cout << "TLE x " << msi["TLE"] << "\n";
    cout << "RE x " << msi["RE"] << "\n";

    return 0;
}
