#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define beg begin
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple 
#define sz(x) ((int) (x).size())
#define sqr(x) ((x) * (x))
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define RFOR(i,a,n) for(in i=a;i>=n;i--)
#define endl "\n"

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

//inline int max(int a, int b) { return (a>b?a:b);}
//inline int min(int a, int b) { return (a<b?a:b);}
int gcd(int a, int b){ return b?gcd(b,a%b):b;}
int lcm(int a, int b){ return a/gcd(a,b)*b;}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n,m;
	cin >> n >> m;
	vpii v(n);
	rep(i,n) cin >> v[i].fi >> v[i].se;
	vi t(n);

	rep(i,n) t[i]=v[i].fi-v[i].se;

	ll sum=0,summ=0;

	rep(i,n){
		sum+=v[i].fi;
		summ+=v[i].se;
	}

	if(sum<=m){
		cout << 0 << endl;
		return 0;
	}
	if(summ>m){
		cout << -1 << endl;
		return 0;
	}

	sort(rall(t));

	int ans=0;
	rep(i,n){
		ans++;
		if(sum-t[i]<=m){
			break;
		}
		else{
			sum-=t[i];
		}
	}
	cout << ans << endl;
	return 0;
}