#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    double a, b;
    cin >> a >> b;
    cout.precision(5);
    cout.setf(ios::fixed);
    cout << "MEDIA = " << ((a*3.5) + (b*7.5))/11 << endl;
    return 0;
}
