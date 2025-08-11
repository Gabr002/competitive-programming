#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int fat(int n){
    if(n == 0 || n == 1) return 1;

    return n*fat(n-1);
}

int main(){ _
    int n; cin >> n;
    cout << fat(n) << "\n";
    return 0;
}
