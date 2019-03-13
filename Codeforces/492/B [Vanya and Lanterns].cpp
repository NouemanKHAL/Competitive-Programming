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

const int MAXN = 1e3+3;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

ll n, l;
ld ans, lo = 0, hi = 1e9, mid;

vector<ll> t;
bool isLamp[MAXN];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> l;
	t.resize(n);
	for(int i = 0; i < n; ++i) {
		cin >> t[i];
	}

	sort(all(t));

	int maxDis = 0;
	for(int i = 1 ; i < n; ++i) {
		if(t[i]-t[i-1] > maxDis) maxDis = t[i]-t[i-1];
	}

	ld tmp = max( t[0], l - t[n-1] );

	ld dis = maxDis/2.0;

	ans = max(dis,tmp);
	cout << fixed << setprecision(9) << ans << endl;


	return 0;
}