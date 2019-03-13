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

string s;
int freq[27], cnt, ans;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> s;

   if(s.size() == 1) {
      cout << "First" << endl;
      return 0;
   }

   for(auto c : s){
      ++freq[c];
   }

   for(auto c : s){
      if(freq[c]&1) cnt++;
   }

   if((max((cnt-1),0)&1)) cout << "Second" << endl;
   else cout << "First" << endl;



   return 0;
}


