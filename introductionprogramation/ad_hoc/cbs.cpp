// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int k = 2, p=0, q = 0, l = 0;
//     vector<int> vt = {3, 5, 7, 6, 3}, gd;

//     while(p != vt[vt.size()-1]){
//         l = max(vt[p], vt[q]) - min(vt[p], vt[q]);
//         if( p == q )  gd.push_back(vt[p]);
//         else if(l <= k) gd.push_back(l);

//         if( q == vt.size()-1 ){  
//             p++;
//             q = p;
//         }else{
//             q++;
//         }
//     }

//     if(gd.size() > 1000000000)
//         printf("%d", 1000000000);
//     else
//         printf("%ld", gd.size());
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solution(int K, vector<int> &A) {
    ll p=0, q = 0, l = 0, count = 0;

    while(p < A[A.size()-1]){
        l = max(A[p], A[q]) - min(A[p], A[q]);
        if(l <= K) count++;

        if( q == A.size()-1 ){  
            p++;
            q = p;
        }else{
            q++;
        }
    }

    if(count >= 1000000000)
        return 1000000000;
    else
        return count;
}
