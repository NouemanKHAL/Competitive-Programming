#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define L(X) ((X)<<1)
#define R(X) (((X)<<1)|1)
#define M(X,Y) (((X)+(Y))>>1)

using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;

const int MAXN = 200;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, m, corr[MAXN], wrng[MAXN];
int maxW = INF, minC = -1;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m;
   for(int i = 0; i < n ; ++i) {
      cin >> corr[i];
      if(corr[i] > minC) minC = corr[i];
   }

   for(int i = 0; i < m ; ++i) {
      cin >> wrng[i];
      if(wrng[i] < maxW) maxW = wrng[i];
   }

   for(int i = minC; i < maxW; ++i) {
      for(int j = 0; j < n; ++j) {
         if(2 * corr[j] <= i) {
            cout << i << endl;
            return 0;
         }
      }
   }

   cout << "-1" << endl;

   return 0;
}


