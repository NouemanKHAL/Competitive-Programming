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
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const int MAXN = 1e4 + 4;
const int INF = 0x3f3f3f3f;
int n, m, q, s, destination;

vector<pair<int, int> > adj[MAXN];
int dist[MAXN];
bool processed[MAXN];

void dijkstra(int x) {
   priority_queue<pair<int, int> > q;
   memset(processed, false, sizeof(processed));
   for (int i = 0; i < n; i++) dist[i] = INF;
   dist[x] = 0;
   q.push({0, x});
   while (!q.empty()) {
      int a = q.top().second; q.pop();
      if (processed[a]) continue;
      processed[a] = true;
      for (auto u : adj[a]) {
         int b = u.first, w = u.second;
         if (dist[a] + w < dist[b]) {
            dist[b] = dist[a] + w;
            q.push({ -dist[b], b});
         }
      }
   }
}


int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   while (cin >> n >> m >> q >> s && ( n || m || q || s)) {

      for (int i = 0, u, v, w; i < m ; ++i) {
         cin >> u >> v >> w;
         adj[u].push_back({v, w});

      }

      dijkstra(s);

      while (q--) {
         cin >> destination;
         if (dist[destination] != INF) cout << dist[destination] << endl;
         else cout << "Impossible" << endl;
      }

      cout << endl;
      
      for (int i = 0; i < n; i++) adj[i].clear();
   }



   return 0;
}
