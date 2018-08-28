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

int a[10], c[10];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int n;
   while (cin >> n && n != -1) {
      int ans = 0;
      for (int i = 0; i < n; i++) {
         cin >> a[i] >> c[i];
         if (!i) ans += a[i] * c[i];
         else ans += a[i] * (c[i] - c[i - 1]);
      }
      cout << ans << " miles" << endl;
   }

   return 0;
}
