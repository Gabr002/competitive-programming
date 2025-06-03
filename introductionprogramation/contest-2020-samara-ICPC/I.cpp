    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n;
        bool resp = true;
        
        cin >> n;
        vector<pair<ll, int>> Vpi(n);
     
        for(int i = 0;i < n; i++){
            int a, c;
            cin >> a >> c;
            Vpi[i].first = a;
            Vpi[i].second = c;
        }
     
        sort(Vpi.begin(), Vpi.end());
     
        // for(int i = 0;i < n; i++) cout << Vpi[i].second << " " << Vpi[i+1].second << endl;

        for(int i = 0; i < n-1; i++){
            if(Vpi[i].second == Vpi[i+1].second){
                resp = false; 
                break;
            }
        }
     
        resp ? printf("YES") : printf("NO");

        return 0;
    }