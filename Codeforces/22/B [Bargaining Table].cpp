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

const int MAXN = 30;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int add(int x, int y) { return ((x % MOD)  + (y % MOD)) % MOD;             }
int mul(int x, int y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;   }
int sub(int x, int y) { return add(x, -y + MOD);                           }

int n, m, bit[MAXN][MAXN];
char g[MAXN][MAXN];

void update(int x, int y, int val) {
   while (x <= n) {
      //debug(x);
      int y0 = y;
      while (y0 <= m) {
         //debugg(y);
         bit[x][y0] += val;
         y0 += y0 & -y0;
      }
      x += x & -x;
   }
}

ll sum(int x, int y) {
   ll sum = 0;
   while (x > 0) {
      int y0 = y;
      while (y0 > 0) {
         sum += bit[x][y0];
         y0 -= y0 & -y0;
      }
      x -= x & -x;
   }
   return sum;
}

int query(int x1, int y1, int x2, int y2) {
   int S1 = sum(x2, y2);
   int S2 = sum(x2, y1 - 1);
   int S3 = sum(x1 - 1, y2);
   int S4 = sum(x1 - 1, y1 - 1);
   return S1 - S2 - S3 + S4;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m;

   for (int i = 1; i <= n ;  ++i) {
      for (int j = 1 ; j <= m ; ++j) {
         cin >> g[i][j];
         update(i, j, g[i][j] - '0');
      }
   }

   int ans = 0;

   for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= m; ++j) {
         for (int k = i; k <= n; ++k) {
            for (int l = j; l <= m; ++l) {
            	if(query(i, j, k, l) == 0) {
            		int perim = (abs(k - i) + 1) * 2 + (abs(l - j) + 1) * 2;
            		if(perim > ans) {
            			ans = perim;
            		}
            	}
            }
         }
      }
   }

   cout << ans << endl;

   return 0;
}


