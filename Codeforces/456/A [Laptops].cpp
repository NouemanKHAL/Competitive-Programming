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
typedef pair<int,int> pii;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int n;
vector< pair<int,int> > v;
bool found = false;

bool isGreater(pair<int,int> & a, pair<int,int> & b) {
	return (a.first < b.first && a.second > b.second);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for(int i = 0, a, b ; i < n ; ++i) {
		cin >> a >> b;
		v.emplace_back(a,b);
	}

	sort(all(v));

	for(int i = 0; i < n - 1 ; ++i) {
		if(isGreater(v[i], v[i + 1])) {
			found = true;
			break;
		}
	}

	if(found) cout << "Happy Alex" << endl;
	else cout << "Poor Alex" << endl;

	return 0;
}


