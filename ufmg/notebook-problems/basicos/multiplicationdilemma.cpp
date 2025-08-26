#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
<<<<<<< HEAD
#define s second 

=======
#define s second
 
>>>>>>> 00ec383 (WIP: salvando alterações locais)
typedef long long ll;
#define endl "\n";
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){ _
    int t; scanf("%d", &t);
    
    while(t--){
        ll a, b, c = 1, d = 1; scanf("%lld%lld", &a, &b);
        vector<ll> v_a, v_b;

        if(a == 0 || b == 0){ 
            printf("%lld\n", a*0);
            continue;
        }
        
        /*
        input:
        2
        55 20
        70 17
        */

        /*
        Output:
        60 x 20 - 5 x 20
        -3 x 70 + 70 X 20
        */
        
        while(a != 0){ // 20
            ll mod_a = a%10; // first case test 
             
            mod_a *= c; 
            a = a/10;
            if(mod_a == 0){
                c *= 10;
                continue; 
            }else if(a != 0) v_a.push_back(mod_a);
            else v_a.push_back(mod_a); 
            c *= 10;
        }
     
        while(b != 0){ 
            ll mod_b = b%10; 
     
            mod_b *= d; 
            b = b/10;
            if(mod_b == 0){
                d *= 10;
                continue;
            }else if(b != 0) v_b.push_back(mod_b);
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
}
