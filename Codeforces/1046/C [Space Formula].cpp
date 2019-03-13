#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 2 ;
int n , m, S[MAXN];
multiset<int> P;

int main()
{
   cin >> n >> m ;
   for (int i = 1 ; i <= n ; ++i) cin >> S[i];
   for (int i = 1 ; i <= n ; ++i) {
      int temp;
      cin >> temp;
      P.insert(-temp);
   }

   int Target = S[m] - *P.begin();
   P.erase(P.begin());

   //cout << Target << endl;

   int upgrades = 0 ;
   for (int i = 1 ; i < m ; ++i ) {
      if ( S[i] > Target ) {
         P.erase(P.begin());
         continue;
      }

      auto it = P.lower_bound(-(Target - S[i]) ) ;
      if (it != P.end()) {
         upgrades++;
         P.erase(it);
      }
   }

   cout << m - upgrades << endl;
   return 0;
}

