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

string a, b;
map<int,int> m[2];

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> a >> b;

   if(csize(a) == csize(b)) {
      int cpt = 0;
      bool sameChars = true;
      for(int i = 0; i < csize(a); ++i) {
         m[0][a[i]]++;
         m[1][b[i]]++;
      }
      for(int i = 'a'; i <= 'z'; ++i) {
         if(m[0][i] != m[1][i]){
            cout << "NO" << endl;
            return 0;
         }
      }
      for(int i = 0; i < csize(a); ++i) {
         if(a[i] != b[i]) cpt++;
      }
      if(cpt == 2) {
         cout << "YES" << endl;
         return 0;
      }
   } 

   cout << "NO" << endl;

   return 0;
}


