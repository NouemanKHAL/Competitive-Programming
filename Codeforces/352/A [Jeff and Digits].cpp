#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){

	int n;
	cin >> n;
	
	int t[n];
	int v[2]={0,0};
	for(int i=0;i<n;i++){
		cin >> t[i];
		v[t[i]%4]++;
	}
	
	if(v[0]==0){
		cout << -1 << endl;
		return 0;
	}
	if(v[1]<9){
		cout << 0 << endl;
		return 0;
	}
	
	sort(t,t+n,greater<int>());
	int max=-1;
	int sum=0;
	for(int i=0;i<v[1];i++){
		sum+=t[i];
		if(sum%45==0){
			max=i;
		}
	}
	
	while((max--)+1){
		cout << 5;
	}
	
	for(int i=0;i<v[0];i++){
		cout << 0;
	}
	cout << endl;
	return 0;
}