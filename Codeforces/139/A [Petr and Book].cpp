#include <iostream>
#include <cstring>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int d[7];
	long long sum[7];
	memset(sum,0,7*sizeof(long long));
	long long s=0;
	for(int i=0;i<7;i++){
		cin >> d[i];
		s+=d[i];
		sum[i]=s;
	}
	
	if(n%s==0){
		int i;
		for(i=6;i>=0;i--){
			if(d[i]!=0) break;
		}
		cout << i+1 << endl;
		return 0;
	}
		
	for(int i=0;i<7;i++){
		if(sum[i]>=(n%s)){
			cout << i+1 << endl;
			return 0;
		}
	}
	
	
	
	return 0;
}