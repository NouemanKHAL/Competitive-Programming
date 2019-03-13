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

const int MAXN = 150005;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, k, a[MAXN], pre[MAXN], minn = INF, ptr = 1, ans = 1;

int sum(int i, int j) {
   if(i == j) return a[i];
   if(i == 1) return pre[j];
   else return pre[j] - pre[i - 1];
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> k;
   k--;

   for(int i = 1 ; i <= n ; ++i) {
      cin >> a[i];
      pre[i] = a[i];
   }  

   for(int i = 2 ; i <= n ; ++i) {
      pre[i] += pre[i - 1];
   }

   while(ptr + k <= n) {
      int val = sum(ptr, ptr + k);
      if(val < minn) {
         minn = val;
         ans = ptr;
      }
      ptr++;
   }

   cout << ans << endl;



   return 0;
}


