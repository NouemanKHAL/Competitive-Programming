#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define beg begin
#define fi first
#define se second
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	scanf(" %d",&n);
	
	int * t = new int[n];
	
	rep(i,n){
		scanf(" %d",t+i);
	}
	
	ll a=0,b=0;
	
	ll i=-1,j=n,max=0;
	while(i<j){
		if(a==b){
			max=a;
		}
		if(a>=b){
			b+=t[j-1];
			j--;
		}
		else if(a<b){
			a+=t[i+1];
			i++;
		}
	}
	
	cout << max << endl;
	
	return 0;
}