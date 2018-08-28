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

int nbr;

int solve(int n) {
   int res = 0;
   int sz = ceil(log2(n));
   if (!(n & (n - 1))) sz++;
   for (int i = 0; i < sz; ++i) {
      if (( n & (1 << i))) {
         res = res | (1 << sz - i - 1);
      }
   }
   return res;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> nbr;
   cout << solve(nbr) << endl;

   return 0;
}
