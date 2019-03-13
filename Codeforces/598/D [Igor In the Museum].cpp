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

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;

const int MAXN = 1010;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int add(int x, int y) { return ((x % MOD)  + (y % MOD)) % MOD;             }
int mul(int x, int y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;   }
int sub(int x, int y) { return add(x, -y + MOD);                           }


const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, 1, 0, -1};

int n, m, k, id;
string g[MAXN];
bool vis[MAXN][MAXN];
int dp[MAXN * MAXN];
int cmp[MAXN][MAXN];

inline bool isValid(int x, int y) {
   return ((x >= 0 && y >= 0) && (x < n  && y < m));
}


int bfs(int x, int y) {
	vis[x][y] = true;
	cmp[x][y] = id;

	int cnt = 0;

	for(int i = 0, xx, yy; i < 4 ; ++i) {
		xx = x + dx[i];
		yy = y + dy[i];

		if(g[xx][yy] != '.') ++cnt;
		else if(isValid(xx, yy) && g[xx][yy] == '.' && !vis[xx][yy]) {
			cnt += bfs(xx, yy);
		}
	}

	return cnt;
}



int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   memset(dp, -1, sizeof dp);
   memset(vis, 0, sizeof vis);

   cin >> n >> m >> k;

   for (int i = 0;  i < n ; ++i) {
      cin >> g[i];
   }

   for(int i = 1; i < n - 1; ++i) {
   	for(int j = 1; j < m - 1; ++j) {
   		if(!vis[i][j] && g[i][j] == '.') {
   			dp[id] = bfs(i, j);
   			++id;
   		}
   	}
   }


   for (int i = 0, x, y, res; i < k ; ++i) {
      cin >> x >> y;
      --x; --y;
      cout << dp[cmp[x][y]] << endl;
   }

   return 0;
}


