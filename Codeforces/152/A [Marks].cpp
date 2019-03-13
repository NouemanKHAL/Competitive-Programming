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

const int MAXN = 150;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, m, cnt, mx[MAXN];
bool ans[MAXN];
string g[MAXN];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m;

   for (int i = 0 ; i < n ; ++i) {
      cin >> g[i];
   }

   for (int j = 0 ; j < m ; ++j) {
      int max = 0;
      for (int i = 0 ; i < n ; ++i) {
         if (g[i][j] > max) {
            max = g[i][j];
         }
         mx[j] = max;
      }
   }

   for (int i = 0 ; i < n; ++i) {
      for (int j = 0 ; j < m; ++j) {
      	if(g[i][j] >= mx[j]) {
      		if(!ans[i]) cnt++;
      		ans[i] = true;
      	}
      }
   }

   cout << cnt << endl;


   return 0;
}


