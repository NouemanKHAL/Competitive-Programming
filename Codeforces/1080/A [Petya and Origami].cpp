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

ll n, k;
ll pr, pg, pb;

int myceil(int a, int b) {
	if(a < b) return 1;
	if(a % b) return a / b  + 1;
	else return a / b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	pr = 2* n;
	pg = 5* n;
	pb = 8* n;

	cout << myceil(pr,k) + myceil(pg,k) + myceil(pb,k) << endl;


	return 0;
}
