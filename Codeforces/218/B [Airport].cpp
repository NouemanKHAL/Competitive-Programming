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

const int MAXN = 1e3 + 10;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n, m, ansMin, ansMax;
vector<int> a;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> m;
   a.resize(m);
   priority_queue<int> nim, nax;

   for (int i = 0 ; i < m; ++i) {
      cin >> a[i];
      nim.push(-a[i]);
      nax.push(a[i]);
   }

   // ansMin

   int people = 0, i = 0;
   while(people < n){
   	ansMin += -nim.top();
   	int tmp = nim.top();
   	nim.pop();
   	if(tmp+1!=0) nim.push(tmp+1);
   	people++;
   }

   // ansMax

   people = 0, i = 0;
   while(people < n){
   	ansMax += nax.top();	 
   	nax.push(nax.top()-1);
   	nax.pop();
   	people++;
   }


   cout << ansMax << ' ' << ansMin << endl;



   return 0;
}
