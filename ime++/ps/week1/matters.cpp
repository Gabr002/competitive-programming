#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

typedef int tipo;

// strict weak order -> Extritamente fraca
bool cmp(tipo a, tipo b){
    return a > b;
}

v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){ _
    // char s[100];
    // 99 + '/0'
    // s = tam(10001)
    // Cuidado para não estourar a memória em si...
    
    // trabalhando com pair
    // pair<int,int> ponto;

    // ponto.first = 1;
    // ponto.second = 2;

    sort(v, v + 10, cmp);
    for(int i = 0; i < 10; i++) cout << v[i];

    return 0;
}
