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

const int MAXN = 5e3 + 3;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int g[9][9];
vector<int> a, b;

inline bool isValid(int x, int y) {
   return (x >= 0 && x < 8) && (y >= 0 && y < 8);
}

bool check(int x, int y) {
   // check column
   for (int i = 0; i < 8; i++) {
      if (i == x) continue;
      if (g[i][y] == 1) {
         return false;
      }
   }
   // check line
   for (int j = 0; j < 8; j++) {
      if (j == y) continue;
      if (g[x][j] == 1) {
         return false;
      }
   }

   // check diagonal left
   for (int i = 1; i < 8; i++) {
      if (isValid(x - i, y + i)) {
         if (g[x - i][y + i] == 1) {
            return false;
         }
      }
      if (isValid(x + i, y - i)) {
         if (g[x + i][y - i] == 1) {
            return false;
         }
      }
   }

   // check diagonal right
   for (int i = 1; i < 8; i++) {
      if (isValid(x + i, y + i)) {
         if (g[x + i][y + i] == 1) {
            return false;
         }
      }
      if (isValid(x - i, y - i)) {
         if (g[x - i][y - i] == 1) {
            return false;
         }
      }
   }

   return true;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
         char c;
         cin >> c;
         if (c == '*') {
            g[i][j] = 1;
            a.push_back(i);
            b.push_back(j);
         }
         else {
            g[i][j] = 0;
         }
      }
   }

   if (csize(a) != 8) {
      cout << "invalid" << endl;
      return 0;
   }

   for (int i = 0; i < csize(a); ++i) {
      if (!check(a[i], b[i])) {
         cout << "invalid" << endl;
         return 0;
      }
   }

   cout << "valid" << endl;

   return 0;
}
