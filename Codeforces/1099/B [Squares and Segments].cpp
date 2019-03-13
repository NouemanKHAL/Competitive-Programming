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

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int add(int x, int y) { return ((x % MOD)  + (y % MOD)) % MOD;             }
int mul(int x, int y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;   }
int sub(int x, int y) { return add(x, -y + MOD);                           }



int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   int sqr = ceil(sqrt(n));

   cout << (int)ceil(2.0 * sqrt(n)) << endl;


   return 0;
}


