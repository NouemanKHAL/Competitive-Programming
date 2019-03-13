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

int g[7][7], ans;
int s[] = {1, 2, 3, 4, 5};

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   for (int i = 1; i <= 5; ++i) {
      for (int j = 1; j <= 5; ++j) {
         cin >> g[i][j];
      }
   }

   do {
      int cpt = 0;
      for (int i = 0; i < 4; ++i) {
         for (int j = i; j < 5; ++j) {
            if(j + 1 > 4) break;
            cpt += g[s[i]][s[i + 1]] + g[s[i + 1]][s[i]];
            j++;
         }
      }
      ans = max(ans, cpt);
   } while (next_permutation(s, s + 5));

   cout << ans << endl;



   return 0;
}


