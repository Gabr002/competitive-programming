#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;
#define endl "\n";

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; scanf("%d", &t);
    
        vector<ll> v_a, v_b;

    // Para o primeiro produto

    while(t--){
        ll a, b, c = 1, d = 1; scanf("%lld%lld", &a, &b);

        while(a > 0){
            ll mod_a = a%10;    

            mod_a *= c;
            a = a/10;
            if(mod_a == 0){ 
                 v_a.push_back(10);
                if(a<=9){  
                    v_a.push_back(a);
                    break;
                }        
            }
            else if(a > 0) v_a.push_back(mod_a);
            else v_a.push_back(mod_a);
            c *= 10;
        }

        // Para o segundo produto

        while(b > 0){
            // 20
            ll mod_b = b%10; // 0

            mod_b *= d; // 0
            b = b/10;
            if(mod_b == 0){ 
                v_b.push_back(10); // 10
                if(b<=9){ 
                    v_b.push_back(b);
                    break;
                }
            }
            else if(b > 0) v_b.push_back(mod_b);
            else v_b.push_back(mod_b);
            
            d *= 10;
        }

        for(int i = 0; i < v_a.size(); i++){
            for(int j = 0; j < v_b.size(); j++){
                if(i == v_a.size()-1 && j == v_b.size()-1)
                    printf("%lld x %lld\n", v_a[i], v_b[j]);
                else
                    printf("%lld x %lld + ", v_a[i], v_b[j]);
            }
        }
    }
    
    return 0;
}
