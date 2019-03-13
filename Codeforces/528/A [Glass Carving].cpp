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

int tc, n, m, q, pos;
char c;

set<ll> x;
set<ll> y;

multiset<ll> pqx;
multiset<ll> pqy; 

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m >> q;

   x.insert(0); x.insert(n);
   y.insert(0); y.insert(m);

   pqx.insert(n);
   pqy.insert(m);

   while (q--) {
      cin >> c >> pos;
      if (c == 'V') {
         ll a,b;
         auto it = x.lower_bound(pos);
         b = *it; it--; a = *it;
         pqx.erase(pqx.find(b-a));
         pqx.insert(b-pos);
         pqx.insert(pos-a);
         x.insert(pos);
      }
      else {
         ll a,b;
         auto it = y.lower_bound(pos);
         b = *it; it--; a = *it;
         pqy.erase(pqy.find(b-a));
         pqy.insert(b-pos);
         pqy.insert(pos-a);
         y.insert(pos);
      }
      ll ans = (*(pqx.rbegin())) * (*(pqy.rbegin()));
      cout << ans << endl;
   }



   return 0;
}
