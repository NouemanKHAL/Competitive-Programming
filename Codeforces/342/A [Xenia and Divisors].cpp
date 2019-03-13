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

int n, a[MAXN];
map<int, int> m;
multiset<int> s;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for (int i = 0, val; i < n ; ++i) {
      cin >> a[i];
      val = a[i];
      m[val]++;
      if (val == 5 || val == 7) {
         cout << -1 << endl;
         return 0;
      }
   }

   for (auto c : m) {
      if (c.second > (n / 3)) {
         cout << -1 << endl;
         return 0;
      }
   }

   if (m[1] != n / 3) {
      cout << -1 << endl;
      return 0;
   }

   if (m[3] <= m[6] && m[2] == m[4] + (m[6] - m[3]) && m[1] == n / 3) {
      
      int tmp = m[3];

      for (int i = 0; i < tmp; ++i) {
         if(m[1] && m[3] && m[6]) cout << "1 3 6" << endl;
         else {
            break;
         }
         m[1]--;
         m[3]--;
         m[6]--;
      }

      tmp = m[4];

      for (int i = 0; i < tmp; ++i) {
         if(m[1] && m[2] && m[4]) cout << "1 2 4" << endl;
         else {
            break;
         }
         m[1]--;
         m[2]--;
         m[4]--;
      }

      tmp = m[6];

      for (int i = 0; i < tmp; ++i) {
         if(m[1] && m[2] && m[6]) cout << "1 2 6" << endl;
         else {
            break;
         }
         m[1]--;
         m[2]--;
         m[6]--;
      }


   } else {
      cout << -1 << endl;
   }




   return 0;
}


