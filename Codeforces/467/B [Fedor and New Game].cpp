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

int n, m, k, ans;
vector<unsigned int> army;

bool solve(int x) {
	return (__builtin_popcount(x)<= k );
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;

	army.resize(m+2);

	for(int i = 1 ; i <= m + 1; ++i) {
		cin >> army[i];
	}


	int fedora = army[m+1];
	for(int i = 1 ; i <= m; ++i) {
		if(solve(fedora ^ army[i])) 
			ans++;
	}

	cout << ans << endl;

	return 0;
}
