#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

inline int min(int a, int b){
	return (a<b?a:b);
}

int main(){
	int n;
	cin >> n;
	
	string a,b;
	cin >> a;
	cin >> b;
	
	
	int ans = 0;
	
	for(int i=0;i<a.length();i++)
	{
		int diff = min(abs(a[i]-b[i]),abs(10-abs(a[i]-b[i])));
		ans+=diff;
	}
	cout << ans << endl;
	
	return 0;
}