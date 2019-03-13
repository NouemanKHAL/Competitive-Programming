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
typedef pair<int,int> pii;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n;
map<pair<int,int>,int> m;
map<pair<int,int>,int> idx;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   if(n == 1) {
      cout << 1 << endl;
      return 0;
   }

   int minn = INF, maxx = -1;
   for(int i = 1, l, r; i <= n ; ++i) {
      cin >> l >> r;
      if(l < minn) minn = l;
      if(r > maxx) maxx = r;
      m[{l,r}] = true;
      idx[{l,r}] = i;
   }


   if(m[{minn, maxx}]) cout << idx[{minn,maxx}] << endl;
   else cout << -1 << endl;

   return 0;
}


