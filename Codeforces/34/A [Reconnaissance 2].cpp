#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int t[n];
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	int min=abs(t[1]-t[0]);
	for(int i=0;i<n;i++){
		if(abs(t[(i+1)%n]-t[i])<min) min=abs(t[(i+1)%n]-t[i]);
	}

	for(int i=0;i<n;i++){
		if(abs(t[(i+1)%n]-t[i])==min) {
			cout << i+1<< ' ' << ((i+1)%n)+1 << endl;	
			return 0;
		}
	}
	
	
	return 0;
}