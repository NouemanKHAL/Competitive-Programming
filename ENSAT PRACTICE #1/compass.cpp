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

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int src, dest, ans;
   cin >> src;
   cin >> dest;

   a = min(src, dest);
   b = max(src, dest);

   if (abs(src - dest) < 180) {
      ans = src - dest;
   }
   else {
      ans = min(abs(src - dest), abs(360 - b + a));
      if (ans == abs(src - dest)) {
         ans = src - dest;
      }
      else {
         ans = 360 - b + a;
         if (src >= 180 && dest <= 180) ans *= -1;
      }
   }
   if (ans == 180 || ans == -180) cout << 180 << endl;
   else cout << -1 * ans << endl;


   return 0;
}
