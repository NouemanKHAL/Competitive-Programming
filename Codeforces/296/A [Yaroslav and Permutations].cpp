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

const int MAXN = 1e2 + 15;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, a[MAXN];
map<int,int> m;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for(int i = 0; i < n ; ++i) {
      cin >> a[i];
      m[a[i]]++;
   }  

   for(int i = 0; i < n ; ++i) {
      if(m[a[i]] > ceil(n/2.0)) {
         cout << "NO" << endl;
         return 0;
      }
   }

   cout << "YES" << endl;


   return 0;
}


