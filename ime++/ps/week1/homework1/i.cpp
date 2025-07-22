#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, k; scanf("%d%d", &n, &k);

    if(k){
        for(int i = n; i >= n-k+1; i--) printf("%d ", i);
        for(int i = 1; i <= n-k; i++) printf("%d ", i);
        printf("\n");
    }else{ 
        for(int i = 1; i <= n; i++) printf("%d ", i);
        printf("\n");
    }
    return 0;
}
