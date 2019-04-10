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

const int MAXN = 110;
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

const int dx[] = { 0, -1, 0, 1};
const int dy[] = { -1, 0, 1, 0};

int n, m, d, cnt;
char g[MAXN][MAXN];
vector<pair<int, int>> rot;

bool isValid(int x, int y) {
	return (x >= 0 && x < n) && (y >= 0 && y < m);
}

void update(int x, int y) {
	for (int i = 0; i < 4; ++i) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (isValid(xx, yy) && g[xx][yy] == 'o') {
			g[xx][yy] = 'x';
			rot.emplace_back(xx, yy);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> g[i][j];
			if (g[i][j] == 'x') {
				rot.emplace_back(i, j);
			}
		}
	}

	cin >> d;

	while (d--) {
		for (auto &v : rot) {
			update(v.first, v.second);
		}
	}

	for (int i = 0; i < n ; ++i) {
		for (int j = 0; j < m ; ++j) {
			if (g[i][j] == 'o') {
				++cnt;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}
