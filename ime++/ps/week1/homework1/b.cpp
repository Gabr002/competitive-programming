#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; cin >> n;
    deque<int> di;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        di.pb(x);
    }

    sort(di.begin(), di.end());
    
    bool check = true;

    while(di.size() != 1){
        if(check){ 
            di.pop_back();
            check = false;
        }else{
            di.pop_front();
            check = true;
        }
    }

    cout << *di.begin() << endl;
    return 0;
}
