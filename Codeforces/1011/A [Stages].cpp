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

int n, k, ans;
string str;
string value = "0abcdefghijklmnopqrstuvwxyz";
bool found = false;

int valueOf(char c) {
	return distance(value.begin(), find(all(value),c));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	cin >> str;
	sort(all(str));
	str.erase(unique(all(str)),str.end());

	stack<char> s;

	s.push(str[0]);
	ans += valueOf(str[0]);
	k--;

	if(k==0) found = true;

	for (int i = 1 ; i < n && k; ++i) {
		if(str[i] > s.top() + 1) {
			if (!found) found = true;
			s.push(str[i]);
			ans += valueOf(str[i]);
			k--;
		}
	}

	if (k) cout << "-1" << endl;
	else cout << ans << endl;


	return 0;
}
