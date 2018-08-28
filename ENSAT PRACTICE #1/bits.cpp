#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define csize(x) (int)((x).size())
#define debug(x) cout << #x ":" << x << ' ';
#define debugg(x) cout << #x ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl
#define space ' '

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const int MAXN = 1e5 + 5;

int t, ans;

inline int nbrOnes(int n) {
   return __builtin_popcount(n);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> t;

   while (t--) {
      ans = 0 ;
      string s;
      cin >> s;
      for (int i = 0; i < csize(s); ++i) {
         string sub = s.substr(0, i + 1) ;
         int tmp = nbrOnes(stoi(sub));
         if (tmp > ans) ans = tmp;
      }
      cout << ans << endl;
   }

   return 0;
}
