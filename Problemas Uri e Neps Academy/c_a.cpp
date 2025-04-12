#include <bits/stdc++.h>
using namespace std;

long long inv = 0;
vector <int> merge(vector <int> &v, int i, int j){
     vector <int> lv, rv, ans;
    if(i==j){
        ans.push_back(v[i]);
        return ans;
    }
    int mid = (i+j)/2;
    lv = merge(v, i, mid);
    rv = merge(v, mid+1, j);
    int l = 0, r = 0;
    while(l < mid-i+1 || r < mid-j+1){
        if(l>=mid-i+1) ans.push_back(rv[r++]);
        else if(r>=j-mid) ans.push_back(lv[l++]);
        else if(lv[l] <=rv[r]) ans.push_back(lv[l++]); 
        else {(ans.push_back(rv[r++])); inv+=mid-i+1-l;}

        return ans;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        inv = 0;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        merge(v, 0, n-1);
        cout << inv << endl;
    }
}