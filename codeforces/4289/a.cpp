#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int qp(int p){
    int sum = 0;

    for(int i = 1; i <= p; i++){
        if(p%i == 0) sum++;
        
        if(sum>3) return 0;
    }   
    
    if(sum < 3) return 0;
    else if(sum == 3) return 1;
    return 0;
} 

int main(){ _
    int k; cin >> k;
    
    if(qp(k)) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
