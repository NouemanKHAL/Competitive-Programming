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

const int MAXN = 2e5 + 5;
const int INF = 0x3f3f3f3f;

ll n, k, s, t, largeDist, ans = INF;
set<int> g;
multiset<int> gIntervals;
vector<pair<int, int>> v;
bool found = false;

bool can(ll L) {
   //debugg(L);
   if (L < largeDist) return false;
   ll time = 0, fastMode;
   for (auto & dist : gIntervals) {
      fastMode = min((ll)dist, L - dist);
      time += fastMode + (dist - fastMode) * 2LL;
   }
   //debugg(time);
   return (time <= t);
}

bool orderByCap(const pair<int, int> & a, const pair<int, int> & b) {
   return a.second > b.second;
}

bool orderByPr(const pair<int, int> & a, const pair<int, int> & b) {
   return a.first < b.first;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> k >> s >> t;

   for (int i = 0, pr, cap; i < n; ++i) {
      cin >> pr >> cap;
      v.push_back({pr, cap});
   }


   gIntervals.insert(s);
   g.insert(0);
   g.insert(s);

   for (int i = 0, pos; i < k; ++i) {
      cin >> pos;
      auto it = g.lower_bound(pos);
      int R = *it;
      it--;
      int L = *it;
      gIntervals.erase(gIntervals.find(R - L));
      gIntervals.insert(R - pos);
      gIntervals.insert(pos - L);
      g.insert(pos);
   }

   largeDist = *(gIntervals.rbegin());

   sort(all(v), orderByCap);

   int lo = 0,  hi = n - 1, mid, minCap = 2 * largeDist;

   while (lo <= hi) {
      mid = (hi + lo) >> 1;
      if (can(v[mid].second)) {
         minCap = v[mid].second;
         ans = v[mid].first;
         lo = mid + 1;
         found = true;
      }
      else {
         hi = mid - 1;
      }
   }


   if (!found) {
      cout << "-1" << endl;
      return 0;
   }

   sort(all(v), orderByPr);

   for (auto & e : v) {
   	if (e.first < ans && e.second >= minCap) ans = e.first;
   }

   cout << ans << endl;


   return 0;
}
