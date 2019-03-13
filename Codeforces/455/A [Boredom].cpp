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
typedef pair<int,int> pii;

const int MAXN = 1e5+5;
const int MAXV = 1e5+5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int a[MAXN], cnt[MAXV], n;
ll dp[MAXN];

ll solve(int x) {
   if(x >= MAXN) return 0;
   if(dp[x] >= 0) return dp[x];

   ll ans = max(cnt[x] * (ll) x + solve(x + 2), solve(x + 1));
   return dp[x] = ans;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for(int i = 0 ; i < n ; ++i) {
      cin >> a[i];
      ++cnt[a[i]];
   }

   memset(dp, -1, sizeof(dp));
   cout << solve(1) << endl;
   return 0;
}

