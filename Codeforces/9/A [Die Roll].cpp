#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define beg begin
#define fi first
#define se second
#define pb push_back
#define sz(x) ((int) (x).size())
#define sqr(x) ((x) * (x))
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define RFOR(i,a,n) for(in i=a;i>=n;i--)
#define endl "\n"

using namespace std;

typedef unsigned long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

inline int max(int a, int b) { return (a>b?a:b);}
int gcd(int a, int b){ return b?gcd(b,a%b):a;}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int y,w;
	cin >> y >> w;
	int n = max(y,w);
	int p = 6-n+1;
	int g = gcd(p,6);
	cout << p/g << "/" << 6/g << endl;
	return 0;
}