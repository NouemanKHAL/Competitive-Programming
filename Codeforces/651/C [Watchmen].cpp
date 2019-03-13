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
using ll = long long;
using ull = unsigned long long;
using pii = pair<ll,ll>;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

template<typename T>   T max_self(T& a, T b) { if(a < b) a = b; return a; }
template<typename T>   T min_self(T& a, T b) { if(a > b) a = b; return a; }
template<typename T>   T add(T x, T y) { return ((x % MOD)  + (y % MOD)) % MOD;}
template<typename T>   T mul(T x, T y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;}
template<typename T>   T sub(T x, T y) { return add(x, -y + MOD);}
template<typename T>   T gcd(T a, T b) { return b ? gcd(b, a % b) : a;}
template<typename T>   T lcm(T a, T b) { return a / gcd(a, b) * b;}

ll n, x[MAXN], y[MAXN];
ll ans, cpt;
map<ll,ll> xx, yy;
map<pii, ll> p;


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for(int i = 0; i < n ; ++i) {
      cin >> x[i] >> y[i];
      xx[x[i]]++;
      yy[y[i]]++;
      p[{x[i] , y[i]}]++;
   }

   for(int i = 0; i < n ; ++i) {
      if(p[{x[i], y[i]}] > 1) {
         cpt += p[{x[i], y[i]}] * (p[{x[i], y[i]}] - 1) / 2;
         p[{x[i], y[i]}] = 0;
      }
   }

   for(int i = 1 ; i <= n; ++i) {
      if(xx[x[i]] > 1){
         ans += xx[x[i]] * (xx[x[i]] - 1LL) / 2LL;  
         xx[x[i]] = 0;
      } 

       if(yy[y[i]] > 1){
         ans += yy[y[i]] * (yy[y[i]] - 1LL) / 2LL;
         yy[y[i]] = 0;
      } 
   }

   cout << ans - cpt << endl;

   return 0;
}





