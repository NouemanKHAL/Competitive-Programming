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


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   string s;
   cin >> s;

   int pos = 0;

   while(pos < csize(s) && s[pos] == '0') ++pos;

   if(pos == csize(s)) {
      cout << 0 << endl;
      return 0;
   }

   for(int i = pos; i < csize(s); ++i) {
      if(s[i] == '1' && i + 1 < csize(s)) cout << s[i];
      else {
         if(i + 1 < csize(s)) cout << s.substr(i + 1) << endl;
         return 0;
      }
   }


   return 0;
}


