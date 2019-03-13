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

ll n, k, kmin, kmax;

ll solve(ll n) {
	n--;
	return n*(n+1)/2; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;


	kmin = (n%k)*solve(n/k+1)+(k-n%k)*solve(n/k);
	kmax = solve(n-(k-1));

	cout << kmin << ' ' << kmax << endl;

	return 0;
}
