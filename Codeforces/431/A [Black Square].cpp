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

int a[2];

inline int max(int a, int b) { return (a>b?a:b);}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int t[4];
    rep(i,4) cin >> t[i];
    
    string s;
    cin >> s;
    
    int ans=0;
    rep(i,s.length()) ans+=t[s[i]-'0'-1];
    cout << ans << endl;
    
	return 0;
}