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

ll n, m, cpt;
vector<int> v;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	cin >> n;

	v.resize(n+1);

	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	// base numbers of inversions simple O(n²)

	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(v[i] > v[j]) 
				++cpt;
		}
	}

	cin >> m;

	for(int i = 0, l, r; i < m ; ++i) {
		cin >> l >> r;
		cpt += (r - l + 1) / 2;
		if(cpt&1) cout << "odd" << endl;
		else cout << "even" << endl;

	}

	return 0;
}
