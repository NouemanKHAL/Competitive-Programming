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
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

ll l, r, i, j, k, ansi, ansj, ansk;

bool isCoprime(ll a, ll b) {
   return (__gcd(a, b) == 1);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> l >> r;

   bool found = false;

   for (i = l ; i <= r - 2 && !found; ++i) {
      //debug(i);
      for (j = i + 1; j <= r - 1 && !found; ++j) {
         //debug(j);
         for (k = j + 1; k <= r && !found; ++k) {
            //debugg(k);
            if(i != j && i != k) {
            	if (isCoprime(i, j) && isCoprime(j, k) && !isCoprime(i, k)) {
               	found = true;
               	ansi = i;
               	ansj = j;
               	ansk = k;
               	break;
            	}
            }
         }
      }
   }

   if (!found) cout << -1 << endl;
   else cout << ansi << ' ' << ansj << ' ' << ansk << endl;

   return 0;
}


