#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	int t[m];
	
	for(int i=0;i<m;i++) cin >> t[i];
  	
  	ll ans = 0;
  	
  	ans+=t[0]-1;
  	for(int i=0;i<m-1;i++){
  			if(t[i+1]>=t[i]) ans+=t[i+1]-t[i];
  			else ans+=n-abs(t[i+1]-t[i]);
	}
	cout << ans << endl;
  	

	return 0;
}