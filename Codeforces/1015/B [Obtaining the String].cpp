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

	int n;
	cin >> n;

	string s, t;
	cin >> s;
	cin >> t;
	vector<int> f(26),ff(26);

	if(s==t){cout << 0 << endl;return 0;}
	
	rep(i,n){f[s[i]-'a']++;ff[t[i]-'a']++;}
	rep(i,26){ if(f[i]!=ff[i]){ cout << "-1" << endl; return 0;}}

	// cas de transformation
	int ans=0;
	queue<int> q;
	rep(i,n){
		if(t[i]!=s[i]){
			FOR(j,i,n){
				if(t[i]==s[j]){
					for(int a=j;a>i;a--){
						char tmp;
						tmp=s[a];
						s[a]=s[a-1];
						s[a-1]=tmp;
						q.push(a);
						ans++;
					}
					break;
				}
			}
 		}
	}

    if(s==t && ans<=10000){
    	cout << ans << endl;
        while(!q.empty()){
		 cout << q.front() << ' ';
		 q.pop();
	    }
    }
    else cout << -1 << endl;
	return 0;
}