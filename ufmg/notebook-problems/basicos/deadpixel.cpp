#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);

    while(t--){
        int a, b, x, y; scanf("%d%d%d%d", &a, &b, &x, &y);
        
        printf("%d\n", max(max(x, a-1-x)*b, a*max(y, b-1-y)));
    }
    return 0;
}
