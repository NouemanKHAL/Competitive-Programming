#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"

using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, t[MAXN], ans[MAXN], pre[MAXN], cnt[MAXN];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for (int i = 1, val, tmp; i <= n ; ++i) {
      cin >> t[i];
      val = t[i];
      if(ans[val] == -1) continue;
      if (cnt[val] == 0) {
         pre[val] = i;
         ++cnt[val];
      } else {
         if(cnt[val] == 1) {
            ans[val] = i - pre[val];
            pre[val] = i;
            ++cnt[val];
         } else {
            if(cnt[val] > 1 && i - pre[val] != ans[val]) ans[val] = -1; else {
               pre[val] = i;
            }
         }
      }
   
   }

   int cpt = 0;

   for (int i = 0; i < MAXN; ++i) {
      if (cnt[i] && ans[i] != -1) {
         cpt++;
      }
   }

   cout << cpt << endl;

   for (int i = 0; i < MAXN; ++i) {
      if (cnt[i] && ans[i] != -1) {
         cout << i << ' ';
         if (cnt[i] > 1) cout << ans[i] << endl;
         else cout << 0 << endl;
      }
   }


   return 0;
}


