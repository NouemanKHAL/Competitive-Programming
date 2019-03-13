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

string toBinary(int n){
	string res = "";
	if(!n) return "00000000000000000000000000000000";
	while(n){
		res += (n%2)+'0';
		n/=2;
	}
	int size = csize(res);
	for(int i = 0 ; i < 32 - size; ++i) {
		res += "0";
	}
	return res;
}

int maskOf(string s) {
	int mask = 0;
	for(int i = 0 ; i < csize(s); ++i) {
		mask ^= (1 << (s[i]-'a'));
	}
	return mask;
}

map<int,int> m;
int mask[MAXN];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	string s;

	for(int i = 0 ; i < n ; ++i) {
		cin >> s;
		m[mask[i] = maskOf(s)]++;
	}	

	ll ans = 0;

	for(int i = 0 ; i < n ; ++i) {
		ans += m[mask[i]] - 1;
		for(int j = 0 ; j < 26 ; ++j) {
			if(m.find(mask[i]^(1<<j)) != m.end()) {
				ans+=m[mask[i]^(1<<j)];
			}
		}
	}
	cout << ans / 2 << endl;
	return 0;
}
