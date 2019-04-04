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

const int MAXN = 1e5 + 5;
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

int n, a[MAXN], level[MAXN];
vector<int> adj[MAXN];
bool vis[MAXN];

void bfs() {
	vis[1] = true;
	level[1] = 1;
	queue<int> q;
	q.push(1);

	while (!q.empty()) {
		int u = q.front(); 	q.pop();

		vis[u] = true;

		for (auto v : adj[u]) {
			if (vis[v]) continue;
			level[v] = level[u] + 1;
			vis[v] = true;
			q.push(v);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	memset(vis, 0, sizeof vis);

	cin >> n;

	for (int i = 1 ; i <= n ; ++i) {
		cin >> a[i];
	}

	for (int i = 1, u, v ; i <= n - 1; ++i) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bfs();

	ll ans = 0;

	for (int i = 1; i <= n; ++i) {
		if (!(level[i] & 1)) ans += a[i];
	}

	cout << ans << endl;


	return 0;
}