#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        int a, b; scanf("%d%d", &a, &b);

        if(a==b) printf("%d\n", 0);
        else if((a > b && (a-b)%2 == 0) || (a < b && (a-b)%2 != 0)) printf("%d\n", 1);
        else printf("%d\n", 2);
    }
    return 0;
}
