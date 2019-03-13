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

const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n, a[MAXN], pre[MAXN], ans;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for(int i = 1 ; i <= n ; ++i) {
		cin >> a[i - 1];
		pre[i] = a[i - 1] + pre[i-1];
	}

	// for(int i = 0 ; i < n ; ++i) {
	//  	cout << a[i] << ' ';
	// }	cout << endl;

	// for(int i = 1 ; i <= n ; ++i) {
	//  	cout << pre[i] << ' ';
	// }	cout << endl;

	for(int i = 1 ; i < n ; ++i) {
		if(pre[i] == pre[n] - pre[i]) {
			//debugg(i);
			ans++;
		}
	}

	cout << ans << endl;


	return 0;
}
