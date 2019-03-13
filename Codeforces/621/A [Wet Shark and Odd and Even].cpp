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

int a[MAXN];
ll sum;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int odd = 0, even = 0;

	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if(a[i] % 2) ++odd;
		else {
			++even;
			sum += a[i];
			a[i] = -1;
		}
	}

	sort(a, a + n, greater<int>());

	for(int i = 0; i < n && a[i] != -1; ++i) {
		if(odd > 1  || (sum + odd) % 2 == 0) {
			sum += a[i];
			odd--;
		}
	}

	cout << sum << endl;

	return 0;
}


