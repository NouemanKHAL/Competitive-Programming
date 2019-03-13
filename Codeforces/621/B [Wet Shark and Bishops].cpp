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
int g[1001][1001];
int cnt1[MAXN];
int cnt2[MAXN];
ll sum;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for(int i = 0, x, y; i < n ; ++i) {
		cin >> x >> y;
		cnt1[x+y]++;
		cnt2[1000+x-y]++;
	}

	for(int i=0;i<=2000;i++) {
		
		sum += (cnt1[i]*(cnt1[i]-1))/2;
		sum += (cnt2[i]*(cnt2[i]-1))/2;
	}

	cout << sum << endl;

	return 0;
}
