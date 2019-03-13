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

int gcd(int a, int b){ return b?gcd(b,a%b):b;}
int lcm(int a, int b){ return a/gcd(a,b)*b;}
int dis(int a, int b) { return abs(a-b);}
double dist(int ax, int ay, int bx, int by){ return hypot(ax-bx,ay-by);}

const int MAXN = 1e5+5;
const int INF = 2e9+9;

ull n,k,s,ansK=-1;
ull cost[MAXN],t,ansT=INF;
vpii v(MAXN);
int can(int x){
	ll cpt = 0, sum = 0;
	for(int i=1 ; i<=n ; ++i){
		cost[i]=v[i].fi+v[i].se*x;
	}
	sort(cost+1,cost+n+1);
	// cout << "cst: ";
	// for(int i=1 ; i<=n ; ++i){
	// 	cout << cost[i] << " \n"[i==x];
	// }
	for(int i=1; i<=x ;++i){
		if(sum+cost[i]<=s){
			sum+=cost[i];
			cpt++;
		}
	}
	t=sum;
	//cout << "cpt: " << cpt << " s: " << sum << endl << endl;
	return cpt;
}

int main(){    
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> s;
	for(int i=1; i<=n ; ++i){
		cin >> v[i].fi;
		v[i].se = i;
	}

	ull lo=1, hi=n,mid;

	while (lo <= hi) {
		mid = lo + (hi-lo+1)/2;
		//cout << "mid: " << mid << endl;
		if(can(mid)==mid){
			lo = mid+1;
				ansK=mid;
				ansT=t;
		}
		else{
			hi = mid-1;
		}
	}

	if(ansK!=INF && ansT!=INF)cout << ansK << ' ' << ansT << endl;
	else cout << "0 0" << endl;


    return 0;   
}