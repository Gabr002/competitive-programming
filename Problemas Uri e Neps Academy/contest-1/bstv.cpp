#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int twoP(vector<ll>& v, int x){
    ll sum = 0, left = 0, right = v.size()-1;

    while(left < right){
        sum = v[left] + v[right];
        if(sum == x) {
            printf("%d %d", left+1, right+1);
            printf("\n");
            return 0;
        }
        if(sum < x) left++;
        else if(sum > x) right--;
    }
    printf("-1\n");
    return 0;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v;
    int n;
    ll x;

    scanf("%d%lld", &n, &x);

    for(int i = 1; i <= n; i++) {
        ll ai;
        scanf("%lld", &ai);
        v.push_back(ai);
    }

    twoP(v, x);

    return 0;
}