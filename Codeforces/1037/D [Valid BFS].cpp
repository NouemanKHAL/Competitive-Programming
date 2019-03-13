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

const int MAXN = 2e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n;
set<int> adj[MAXN];
vector<int> input(MAXN);
bool vis[MAXN];

int adjOf(int u){
   return csize(adj[u]) - (u != 1);
}
bool isAdjacent(int u, int v) {
   return adj[u].count(v) == 1;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for (int i = 0, u, v ; i < n - 1; ++i) {
      cin >> u >> v;
      adj[u].insert(v);
      adj[v].insert(u);
   }

   for (int i = 1 ; i <= n ; ++i) {
      cin >> input[i];
      if(input[1]!=1){
         cout << "No" << endl;
         return 0;
      }
   }

   queue<int> q;
   q.push(input[1]);
   vis[1] = true;
   int j = 2;

   while (!q.empty() && j <= n) {

      int x = q.front(); q.pop();
      vis[x] = true;

      int nbrOfAdj = adjOf(x);
      int cpt = 0;

      //cout << x << ": " ; 
      for(int i = j; i <= j + nbrOfAdj; ++i){
         if(isAdjacent(x,input[i])){
            vis[input[i]] = true;
            //cout << input[i] << ' ';
            cpt++;
            q.push(input[i]);
         }
      }

      if(cpt!=nbrOfAdj){
         cout << "No" << endl;
         return 0;
      }

      j += nbrOfAdj;
      //cout << endl;
   }

   cout << "Yes" << endl;
   return 0;
}