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
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

bool cmp(pii a,pii b){
	return (a.se<b.se);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	vpii v(n);
	
	// read input as pair<value,index>
	rep(i,n){
		cin >> v[i].fi;
		v[i].se = i+1;
	}
	
	// get k maximum values
	sort(rall(v));
	
	// vector of k max elements
	vpii t(k);
	
	int ans = 0;
	
	rep(i,k){
		t[i]=v[i];
		ans+=t[i].fi;
	}
	
	// sort by index 
	sort(all(t),cmp);
	
	// calculate k interval including the k max value
	int next=0;
	int cpt=0;	
	int a=0;
	if(k==1){
		int sum=0;
		for(int i=0;i<v.size();i++){
			sum+=v[i].fi;
		}
		cout << ans << endl;
		cout << n << endl;
		return 0;
	}
	cout << ans << endl;
	
	a=1;

	int prev=0;
	
	for (int i=0; i<k-1; i++) {
		cout << t[i].second - prev << " ";
		prev=t[i].second;	
	}
	cout << n - prev << endl;

	return 0;
}
