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


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

	ll n, m;
	cin >> n >> m;
	
	ll cpt=0;
	ll sum=0;
	ll tmp;
	rep(i,n){
		cpt=0;
		cin >> tmp;
		sum+=tmp;
		if(sum>=m){
			cpt+=sum/m;
			sum%=m;
		}
		cout << cpt << ' ';
	}

   return 0;
}
