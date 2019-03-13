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

int t, sx, sy, ex, ey, disX, disY, E, S, W, N, ans;
map<char, int> m;
string s;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> t >> sx >> sy >> ex >> ey;

   disX = ex - sx;
   disY = ey - sy;

   cin >> s;

   for (int i = 0; i < t ; ++i) {
      m[s[i]]++;
   }

   if (disX > 0) {
      E += disX;
   } else {
      W += -disX;
   }

   if (disY > 0) {
      N += disY;
   } else {
      S += -disY;
   }

   //debug(E);debug(W);debug(N);debugg(S);
   if (m['N'] >= N && m['S'] >= S && m['W'] >= W && m['E'] >= E) {
      for (auto c : s) {
         //debug(ans);debug(E);debug(W);debug(N);debugg(S);
         if (c == 'E') E--;
         if (c == 'W') W--;
         if (c == 'N') N--;
         if (c == 'S') S--;
         ans++;
         if (E<=0 && W<=0 && S<=0 && N<=0) {
            break;
         }
         
      }
   } else {
      cout << -1 << endl;
      return 0;
   }

  
   if (ans <= t) cout << ans << endl;
   else cout << -1 << endl;

   return 0;
}


