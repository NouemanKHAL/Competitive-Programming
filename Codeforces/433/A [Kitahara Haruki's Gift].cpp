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

const int MAXN = 110;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, sum, ans, t[MAXN];
map<int,int> m;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   if(n == 1) {
      cout << "NO" << endl;
      return 0;
   }

   for(int i = 0; i < n; ++i) {
      cin >> t[i];
      sum += t[i];
      m[t[i]]++;
   }

   int tmp = 0;

   for(int i = 0; i < m[200]; ++i) {
      if(tmp + 200 <= sum/2) tmp += 200;
   }

   if(tmp == sum/2 || ((sum/2 - tmp)%100 == 0 && (sum/2 - tmp)/100 <= m[100]))
      cout << "YES" << endl;
   else cout << "NO" << endl;

   return 0;
}

