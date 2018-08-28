#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define sz(x) (int)((x).size())
#define debug(x) cout << #x ":" << x << ' ';
#define debugg(x) cout << #x ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl
#define space ' '

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : b;}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}

const int MAXN = 1e5 + 5;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   int k, q, r, b, kn, p;
   cin >> k >> q >> r >> b >> kn >> p;

   if (k <= 1) cout << 1 - k << ' ';
   else cout << '-' << k - 1 << ' ';

   if (q <= 1) cout << 1 - q << ' ';
   else cout << '-' << q - 1 << ' ';

   if (r <= 2) cout << 2 - r << ' ';
   else cout << '-' << r - 2 << ' ';

   if (b <= 2) cout << 2 - b << ' ';
   else cout << '-' << b - 2 << ' ';

   if (kn <= 2) cout << 2 - kn << ' ';
   else cout << '-' << kn - 2 << ' ';

   if (p <= 8) cout << 8 - p << ' ';
   else cout << '-' << p - 8 << ' ';

   cout << endl;

   return 0;
}
