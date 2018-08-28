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

int x[3], y[3], resx, resy;
bool ok = false;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   for (int i = 0; i < 3; i++) {
      cin >> x[i] >> y[i];
   }

   for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
         for (int k = 0; k < 3; ++k) {
            if (x[i] == x[j] && y[i] == y[k] && i != j && i != k && j != k) {
               resx = x[k];
               resy = y[j];
               ok = true;
               break;
            }
         }
         if (ok) break;
      }
      if (ok) break;
   }

   cout << resx << ' ' << resy << endl;

   return 0;
}