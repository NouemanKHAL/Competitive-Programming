#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;

const int MAXN = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n;

bool cmp(string a, string b) {
   if (a[0] != b[0]) return a[0] < b[0];
   return a[1] < b[1];
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   bool firstTime = true;

   while (cin >> n && n) {
      if (!firstTime) cout << endl;
      vector<string> v(n);
      for (int i = 0; i < n; ++i) {
         cin >> v[i];
      }
      stable_sort( v.begin(), v.end(), cmp);
      for (int i = 0; i < n; ++i) {
         cout << v[i] << endl;
      }
      firstTime = false;
   }


   return 0;
}
