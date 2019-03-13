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

   int n, pos, l, r;
   cin >> n >> pos >> l >> r;
   int ans = 0;

   if (l > 1) {
      //l!=1
      if (r < n) {
         // l!=1 && r!=n
         ans += min(abs(l - pos), abs(r - pos)) + 1;
         ans += abs(r - l) + 1;
      }
      else {
         // l!=1 && r==n
         ans += abs(l - pos) + 1;
      }
   }
   else {
      //l==1
      if (r < n) {
         //l==1 && r!=n
         ans += abs(r - pos) + 1;
      }
      else {
         //l==1 && r==n
         ans = 0; // just for clarity
      }

   }

   cout << ans << endl;




   return 0;
}
