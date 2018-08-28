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

   int h, m, ansh, ansm;
   cin >> h >> m;

   if (m < 45) {
      ansm = 60 - (45 - m);
      if (h > 1)ansh = h - 1;
      else ansh = 23;
   }
   else {
      ansm = m - 45;
      ansh = h;
   }

   cout << ansh << ' ' << ansm << endl;


   return 0;
}
