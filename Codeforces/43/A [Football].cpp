#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cptA=1,cptB=0;
	string a;
	string b;
	
	for(int i=1;i<n;i++){
		cin >> a;
		if(a==s) cptA++;
		else{
			b=a;
			cptB++;
		}
	}
	if(cptA>cptB) cout << s << endl;
	else cout << b << endl;
	return 0;
}