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

const int MAXN = 4e3 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);


int n, dp[MAXN];
vector<int> a(3);

int solve(int n) {
	if(n >=0 && dp[n] != - 1) return dp[n];
	//debugg(n);
	if(!n) return 0;
	if(n < min(a[0], min(a[1],a[2]))) return -INF;
	return dp[n] = 1 + max(solve(n - a[0]), max(solve(n - a[1]), solve(n - a[2])));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> a[0] >> a[1] >> a[2];

	sort(all(a));	
	memset(dp, -1, sizeof(dp));
	cout<< solve(n) << endl;

	return 0;
}


