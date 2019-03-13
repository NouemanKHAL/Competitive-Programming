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

const int MAXN = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

ll b, s, c, nb, ns, nc, pb, ps, pc, r, tmp, ans;

bool can(ll x) {
   ll pr = max(0LL, (b * x - nb) ) * pb  + max(0LL, (s * x - ns) ) * ps + max(0LL, (c * x - nc)) * pc;
   return (pr <= r);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   string str;
   cin >> str;

   cin >> nb >> ns >> nc;
   cin >> pb >> ps >> pc;
   cin >> r;

   b = count(all(str), 'B');
   s = count(all(str), 'S');
   c = count(all(str), 'C');

   ll lo = 1, hi = 1e13 + 1, mid, ans;
   
   bool ok = false;
   while (lo <= hi) {
      mid = (lo + hi) / 2;
      if (can(mid)) {
         if (!ok) ok = true;
         ans = mid;
         lo = mid + 1;
      }
      else hi = mid - 1 ;
   }

   if (ok)cout << ans << endl;
   else cout << 0 << endl;


   return 0;
}
