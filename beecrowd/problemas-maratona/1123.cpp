#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


    vector<int> adj[N], adjw[N];
    int dist[N];

    memset(dist, 63, sizeof(dist));
    priority_queue<pii> pq;
    pq.push(mp(0,0));

    while (!pq.empty()) {
        int u = pq.top().nd;
        int d = -pq.top().st;
        pq.pop();

        if (d > dist[u]) continue;
        for (int i = 0; i < adj[u].size(); ++i) {
            int v = adj[u][i];
            int w = adjw[u][i];
            if (dist[u] + w < dist[v])
                dist[v] = dist[u]+w, pq.push(mp(-dist[v], v));
        }
    }
}

int main(){ _
    int n, m, c, k; scanf("%d%d%d%d", &n, &m, &c, &p);

    return 0;
}
