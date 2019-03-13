#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;

const int MAXN = 1e5 + 5;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-9;

vector<pii> adj[MAXN];
int n, m, p[MAXN];
ll dist[MAXN];
bool vis[MAXN];

void dijkstra(int s) {
   memset(dist, 0x3f, (n + 1) * sizeof(ll));
   memset(p, -1, (n + 1) * sizeof(int));
   dist[s] = 0;
   p[s] = -1;
   priority_queue<pii, vector<pii>, greater<pii> > pq;

   pq.push({0, s});

   while (!pq.empty()) {
      pii tmp = pq.top(); pq.pop();
      int u = tmp.second, d = tmp.first;

      for (auto & v : adj[u]) {
         if (dist[v.first] > dist[u] + v.second) {
            dist[v.first] = dist[u] + v.second;
            p[v.first] = u;
            pq.push({dist[v.first] , v.first});
         }
      }
   }
}

vector<int> st;

void restorePath(int s, int n) {
   while (p[n] != -1) {
      st.push_back(n);
      n = p[n];
   }
   reverse(all(st));
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m;

   for (int i = 0, u, v, w ; i < m; ++i) {
      cin >> u >> v >> w;
      u--; v--;
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
   }

   dijkstra(0);
   restorePath(0, n - 1);

   if (dist[n - 1] == INF) cout << -1 << endl;
   else {
      cout << 1 << ' ';
      for(auto & c : st) {
         cout << c + 1 << ' ';
      }  cout << endl;
   }

   return 0;
}