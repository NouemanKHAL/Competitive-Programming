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

int l[3], ans;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> l[0] >> l[1] >> l[2];

	sort(l, l + 3);

	if(l[2] <= l[1] + l[0] - 1){
		ans = 0;
	} else {
		ans = max(0, l[2] - l[1] - l[0] + 1);
	}

	cout << ans << endl;



	return 0;
}


