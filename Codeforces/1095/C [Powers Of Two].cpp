#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define L(X) ((X)<<1)
#define R(X) (((X)<<1)|1)
#define M(X,Y) (((X)+(Y))>>1)

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

int add(int x, int y) { return ((x % MOD)  + (y % MOD)) % MOD;             }
int mul(int x, int y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;   }
int sub(int x, int y) { return add(x, -y + MOD);                           }


int p_pow[50];

void init() {
	p_pow[0] = 1;
	for(int i = 1; i  < 31 ; ++i) {
		p_pow[i] = 2 * p_pow[i - 1];
	}
}

int fct(int n) {
	return __builtin_popcount(n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	init();

	int n, k;
	cin >> n >> k;

	if(k < fct(n) || k > n) {
		cout << "NO" << endl;
		return 0;
	} else {
		cout << "YES" << endl;
	}

	multiset<int> res;

	while(n) {
		for(int i = 0; i <= 30; ++i) {
			if(k - 1 >= fct(n - p_pow[i])) {
				res.insert(p_pow[i]);
				n -= p_pow[i];
				k--;
				break;
			}
		}
	}

	for(int c : res) {
		cout << c << ' ';
	}	cout << endl;

	return 0;
}