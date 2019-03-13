#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin >> s;
	int cpt=0;
	if(s[0]!='1'){
		cout << "NO" << endl;
		return 0;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='1') cpt=0;
		if(s[i]=='4') cpt++;
		
		if(cpt>2 || (s[i]!='1' && s[i]!='4')){
			cout << "NO" << endl;
			return 0;
 		}
	}
	
	cout << "YES" << endl;
	return 0;
}