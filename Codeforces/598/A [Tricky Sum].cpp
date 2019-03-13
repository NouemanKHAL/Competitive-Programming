#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
	
		int x = log2(n);
		ll ans=0;
		ll sum = pow(2,x+1)-1;
	
		ans=(n*(n+1)/2)-2*(sum);
		cout << ans << endl;
	}

	
	
												
	return 0;
}