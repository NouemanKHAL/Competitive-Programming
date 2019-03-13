#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define ff first
#define ss second
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

ll n, k, ans;
vector<pair<ll, ll> > v;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> k;
   v.resize(n);

   for (int i = 0 ; i < n ; ++i) {
      cin >> v[i].ff >> v[i].ss;
   }

   sort(all(v));
   ll cpt = v[0].ss;
   for (int i = 0, j = i + 1; i < n ; ++i) {
      if(i) cpt -= v[i-1].ss;
      while ( abs(v[j].ff - v[i].ff) < k  && j < n) {
        cpt += v[j].ss;
        ++j;
      }
      if(cpt > ans) ans = cpt;
      if(j==n) break;
   }

   cout << ans << endl;

   return 0;
}