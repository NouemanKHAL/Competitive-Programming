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
vector<int> t, b;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n;
   t.resize(n);
   b.resize(n);
   for (int i = 0 ; i < n ; ++i ) {
      cin >> t[i];
      b[i] = t[i];
   }

   bool ok = true;

   sort(all(b));
   
   for(int i = 0 ; i < n ; ++i ) {
      if(t[i] != b[i]){
         ok = false;
      }
   }
   if(ok){
      cout << "yes" << endl;
      cout << "1 1" << endl;
      return 0;
   }


   int i = 0, j = n - 1;

   while(t[i]==b[i] && i<n) {
      i++;
   }

   while(t[j]==b[j] && j>=0) {
      j--;
   }

   reverse(t.begin()+i,t.begin()+j+1);

   // for (int i = 0 ; i < n ; ++i ) {
   //    cout << t[i] << ' ';
   // }  cout << endl;

   // for (int i = 0 ; i < n ; ++i ) {
   //    cout << b[i] << ' ';
   // }  cout << endl;



   for(int a = i; a <= j; ++a) {
      if(t[a] != b[a]){
         //debug(a);debug(t[a]);debugg(b[a]);
         cout << "no" << endl;
         return 0;
      }
   }

   cout << "yes" << endl;
   cout << i+1 << ' ' << j+1 << endl;

   return 0;
}
