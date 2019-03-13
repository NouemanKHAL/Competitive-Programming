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

const int MAXN = 110;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n, b, ans, arr[MAXN];
int odd[MAXN], even[MAXN];
vector<int> costs;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> b;

   for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      if (arr[i] & 1) ++odd[i];
      else ++even[i];
   }

   for (int i = 1; i < n; ++i) {
      odd[i] += odd[i - 1];
      even[i] += even[i - 1];
   }

   for (int i = 0; i < n ; ++i) {
      if (odd[i] == even[i]) { // left segment 
         if (odd[n - 1] - odd[i] == even[n - 1] - even[i]) { // right segment
            if (abs(arr[i] - arr[i + 1]) <= b && i != n - 1 ) {
               costs.push_back (abs(arr[i] - arr[i + 1]));
            }
            else if (i == n - 1) break;
         }
      }
   }

   sort(all(costs));

   for(auto & cost : costs) {
   	if(cost <= b){
   		ans++;
   		b-= cost;
   	}
   }

   cout << ans << endl;

   return 0;
}