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

const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n, m, ans;
bool hasCat[MAXN], vis[MAXN];
vector<int> adj[MAXN];

void dfs(int u, int cnt) {
	if(vis[u] || cnt > m) return ;
	vis[u] = true;
	cnt += (hasCat[u] ? 1 : -cnt); 
	if(csize(adj[u]) == 1  && vis[adj[u][0]] && cnt <= m){
		 ans++;
		 return ;
	}

	for(auto & v : adj[u]) {
		if(vis[v]) continue;
		dfs(v, cnt);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for(int i = 1 ; i <= n ; ++i) {
		cin >> hasCat[i];
	}

	for(int i = 0, u, v ; i < n - 1; ++i) {
		cin >> u >> v;
		adj[u].push_back(v); 
		adj[v].push_back(u); 
	}

	dfs(1, 0);

	cout << ans <<endl;

	return 0;
}
