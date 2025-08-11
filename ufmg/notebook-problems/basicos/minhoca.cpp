#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> v(n, vector<int>(m));

    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    
    int maior_linha = 0, maior_coluna = 0;

    for(int i = 0;i < n; i++){
        int count_linha = 0;
        for(int j = 0; j < m; j++){
            count_linha += v[i][j];
        }
        maior_linha = max(maior_linha, count_linha);
    }


    for(int i = 0;i < m; i++){
        int count_coluna = 0;
        for(int j = 0; j < n; j++){
            count_coluna += v[j][i];
        }
        maior_coluna = max(maior_coluna, count_coluna);
    }

    cout << max(maior_coluna, maior_linha) << "\n";

    return 0;
}
