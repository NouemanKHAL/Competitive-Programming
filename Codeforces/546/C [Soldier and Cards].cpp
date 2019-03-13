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

int n, k1, k2, cpt, winner;
deque<int> a, b;

int solve() {
   cpt = 0, winner = 0;
   int cardA, cardB;

   while(cpt <= 100000) {

      if(a.empty() || b.empty()) {
         if(a.empty()) {
            winner = 2;
         } else {
            winner = 1;
         }
         return cpt;
      }


      // puttings cards on table
      cardA = a.back();
      a.pop_back();
      cardB = b.back();
      b.pop_back();

      // check if the fight has a winner
      if(cardA > cardB) {
         a.push_front(cardB);
         a.push_front(cardA);
      } else if(cardB > cardA) {
         b.push_front(cardA);
         b.push_front(cardB);
      }
      ++cpt;
   }

   if(cpt > 100000) return -1;
   
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n; 

   cin >> k1;

   for(int i = 0, tmp; i < k1; ++i) {
      cin >> tmp;
      a.push_front(tmp);
   }

   cin >> k2;

   for(int i = 0, tmp; i < k2; ++i) {
      cin >> tmp;
      b.push_front(tmp);
   }

   // for(int var : a) {
   //    cout << var << ' ';
   // }  cout << endl;

   // for(int var : b) {
   //    cout << var << ' ';
   // }  cout << endl;

   if(solve() == -1) cout << -1 << endl;
   else cout << cpt << ' ' << winner << endl;

   return 0;
}





