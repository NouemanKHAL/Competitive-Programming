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
using pii = pair<int,int>;

const int MAXN = 1e5 + 5;
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

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   string childs[10];

   childs[2] = "2";
   childs[3] = "3";
   childs[4] = "322";
   childs[5] = "5";
   childs[6] = "53";
   childs[7] = "7";
   childs[8] = "7222";
   childs[9] = "7332";

   int n;
   cin >> n;

   string str;
   cin >> str;

   string res = "";

   for(int i = 0; i < sz(str); ++i) {
      if(str[i] <= '1') continue;
      res += childs[str[i] - '0'];
   }

   sort(rall(res));
   cout << res << endl;

   return 0;
}




