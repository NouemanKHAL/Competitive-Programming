#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define L(X) ((X)<<1)
#define R(X) (((X)<<1)|1)
#define M(X,Y) (((X)+(Y))>>1)

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<ll, ll>;

const int MAXN = 55;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

template<typename T>   T max_self(T& a, T b) { if (a < b) a = b; return a; }
template<typename T>   T min_self(T& a, T b) { if (a > b) a = b; return a; }
template<typename T>   T add(T x, T y) { return ((x % MOD)  + (y % MOD)) % MOD;}
template<typename T>   T mul(T x, T y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;}
template<typename T>   T sub(T x, T y) { return add(x, -y + MOD);}
template<typename T>   T gcd(T a, T b) { return b ? gcd(b, a % b) : a;}
template<typename T>   T lcm(T a, T b) { return a / gcd(a, b) * b;}

int n, m, ans = -1;
vector<int> adj[MAXN];

int bfs(int s) {
	int res = -1;
	vector<int> dist(n, INF);
	vector<bool> vis(n, false);

	dist[s] = 0;
	vis[s] = true;

	queue<int> q;
	q.push(s);

	while(!q.empty()) {
		int u = q.front();	q.pop();

		for(int v : adj[u]) {
			min_self(dist[v], dist[u] + 1);
			if(vis[v]) continue;
			vis[v] = true;
			q.push(v);
		}
	}

	for(int i = 0; i < n; ++i) {
		max_self(res, dist[i]);
	}

	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0, a, b; i < m ; ++i) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int u = 0; u < n; ++u) {
		max_self(ans, bfs(u));
	}

	cout << ans << endl;


	return 0;
}