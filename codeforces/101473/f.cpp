#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, count = 0; cin >> n;

    deque<int> v(n);

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    
        
    if(n%3==0){
        int div = n/3;
        for(int i = 0; i < n; ){
            count += v[i];    
        }
    }else{

    }

    
    int UPos = v.back();
    v.push_front(UPos);
    v.pop_back();
    count++;
    
    return 0;
}
