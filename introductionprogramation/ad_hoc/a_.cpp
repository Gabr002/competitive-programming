#include <bits/stdc++.h>
using namespace std;


map<pair<int, int>, string> m;

int main(){
    int n, c1, c2;
    string f;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d%d", &c1, &c2);
        
        scanf("%s", f);
        m.insert({{c1, c2}, f});
    }

    n=0, c1=0, c2=0; scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d%d", &c1, &c2);
        printf("%s\n", m[{c1, c2}]);
    }
}