#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int t[n];
	int min,index;
	cin >> t[0];
	min=t[0];
	index=0;
	for(int i=1;i<n;i++){
		cin >> t[i];
		if(t[i]<min){
			index=i;
			min=t[i];
		}
	}
	
	for(int i=0;i<n;i++){
		if(t[i]==min && i!=index){
			cout << "Still Rozdil" << endl;
			return 0;
		}
	}
	
	cout << index+1 << endl;
	
	return 0;
}