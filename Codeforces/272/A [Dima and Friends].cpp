#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int t[n+1];
	int sum=0,cpt=0;
	for(int i=1;i<=n;i++){
		cin >> t[i];
		sum+=t[i];
	}
	
	int v[10000];
	
	for(int i=0;i<=10000;i++){
		v[i]=i%(n+1)+1;
	}
	
	for(int i=1;i<=5;i++){
		if(v[i+sum-1]!=1){
			cpt++;
		}
	}
	
	cout << cpt << endl;
	
	return 0;
}