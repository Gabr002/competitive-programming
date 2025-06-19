#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int N, K; cin >> N >> K;
    deque<string> ds(N);

    string x; cin >> x;

    for(int i = 0; i < N; i++){
        ds[i] = x[i];
    }

    
    for(int i = 0; i < N && K > 0; i++){
        if(ds[i] == "."){ 
            ds.erase(ds.begin()+i);
            ds.push_front(".");
            K--;
        }
    }
    

    for(int i = 0; i < N; i++){
        cout << ds[i];
    }

    return 0;
}
