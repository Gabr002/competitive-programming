#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int solved(int a, int b){
    int value = (a/2)+7, sum = 0;
    while(b < value){
        a++; b++; sum++;
        value = (a/2)+7;   
    }

    return sum;
}

int main(){ _
    int a, b; cin >> a >> b;
    cout << solved(max(a, b), min(a, b)) << endl;
    return 0;
}
