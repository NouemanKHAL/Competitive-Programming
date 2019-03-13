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
typedef pair<int, int> pii;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n, a[MAXN], step[MAXN];
queue<int> st;
bitset<MAXN> b, tmp;


int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;

   for (int i = 0; i < n ; ++i) {
      cin >> a[i];
      st.push(a[i]);
   }

   for (int i = 0; i < n ; ++i)
      cin >> step[i];

   for (int i = 0; i < n ; ++i) {
      int cpt = 0;
      while ( b[step[i]] == 0 && !st.empty() ) {
         b[st.front()] = 1;
         st.pop();
         cpt++;
      }
      cout << cpt << ' ';
   }
   cout << endl;


   return 0;
}


