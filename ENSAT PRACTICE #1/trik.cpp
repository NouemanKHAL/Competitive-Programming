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

   int a = 1, b = 0, c = 0;

   string s;
   cin >> s;

   for (int i = 0; i < sz(s); ++i) {
      if (s[i] == 'A') {
         swap(a, b);
      }
      else if (s[i] == 'B') {
         swap(b, c);
      }
      else if (s[i] == 'C') {
         swap(a, c);
      }
   }

   if (a == 1) cout << 1 << endl;
   else if (b == 1) cout << 2 << endl;
   else if (c == 1) cout << 3 << endl;


   return 0;
}
