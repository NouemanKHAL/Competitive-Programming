#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl

using namespace std;

typedef unsigned long long int ll;
typedef long long int ull;
typedef long double ld;

const int MAXN = 110;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

ll n, t[MAXN];
vector<ll> adj[MAXN];
vector<bool> visited;
vector<ll> ans;

void dfs(ll v) {
   visited[v] = true;
   for (ll u : adj[v]) {
      if (!visited[u])
         dfs(u);
   }
   ans.push_back(v);
}

void topological_sort() {
   visited.assign(n, false);
   ans.clear();
   for (ll i = 0; i < n; ++i) {
      if (!visited[i])
         dfs(i);
   }
   reverse(ans.begin(), ans.end());
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for (int i = 0 ; i < n; ++i) {
      cin >> t[i];
   }

   for (int i = 0 ; i < n ; ++i) {
      for (int j = i + 1 ; j < n; ++j) {
         if (t[i]%2==0 && t[i]/2 == t[j] || t[j]%2==0 && t[i] == t[j]/2) {
            if (t[i]/2 == t[j]) {
               adj[j].push_back(i);
            }
            if (t[i] == t[j]/2) {
               adj[i].push_back(j);
            }
         }

         if (t[i]%3==0 && t[i]/3 == t[j] || t[j]%3==0 && t[i] == t[j]/3) {
            if (t[i]/3 == t[j]) {
               adj[i].push_back(j);
            }
            if (t[i] == t[j]/3) {
               adj[j].push_back(i);
            }
         }

      }
   }

   topological_sort();


   for (auto e : ans) {
      cout << t[e] << ' ';
   } 	cout << endl;



   return 0;
}
