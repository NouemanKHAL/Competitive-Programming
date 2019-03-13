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

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);


ull n, minn =(int)2e9, maxx = 0, t[MAXN];
map<ull,ull> m;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for(int i = 0; i < n ; ++i) {
      cin >> t[i];
      if(t[i] < minn) minn = t[i];
      if(t[i] > maxx) maxx = t[i];
   }

    for(int i = 0; i < n ; ++i) {
      if(t[i] == maxx) m[maxx]++;
      else if(t[i] == minn) m[minn]++;
   }

   cout << maxx-minn << ' ';
   if(maxx != minn) cout << (m[maxx]*m[minn]) << endl;
   else cout << m[maxx]*(m[maxx]-1LL)/2ULL << endl;



   return 0;
}


