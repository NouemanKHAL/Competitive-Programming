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

map<string,string> m;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int n, q;
	cin >> n >> q;

	string a, b;

	for(int i = 0 ; i < q ; ++i) {
		cin >> a >> b;
		m[a] = b;
	}

	string input;

	for(int i = 0 ; i < n ; ++i) {
		cin >> input;
		if(csize(input) > csize(m[input])) cout << m[input] << ' ';
		else cout << input << ' ';
	}	cout << endl;

	return 0;
}
