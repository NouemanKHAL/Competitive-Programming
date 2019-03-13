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

int n, m;
vector<int> a(MAXN);


bool can(int x) {
	int sum = 0;
	for (int i = 0; i < csize(a); ++i) {
		sum += a[i] / x;
	}
	//debug(x);debugg(sum);
	return (sum >= n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0, tmp; i < m; ++i) {
		cin >> tmp;
		a[tmp]++;
	}
	sort(rall(a));
	a.resize(distance(a.begin(),find(all(a),0)));	
	int lo = 1, hi = 100, mid, ans = 0;

	while (lo <= hi) {
		mid = (lo + hi)/2;
		//debugg(mid);
		if (can(mid)) {
			//cout << "===> "; debugg(mid);
			ans = mid;
			lo = mid + 1;
		}
		else hi = mid - 1;
	}

	cout << ans << endl;

	return 0;
}
