#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll fib[1000];

void init(){
	fib[0]=0;
	fib[1]=fib[2]=1;
	for(int i=3;i<=44;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}	
}

int indexOf(int n){
	for(int i=0;i<=44;i++){
		if(fib[i]==n) return i;
	}
}

int main(){
	init();
	int n;
	cin >> n;
	if(n==3) {
		cout << "1 1 1" << endl;
		return 0;
	}
	else if(n==2){
		cout << "0 1 1" << endl;
		return 0;
	}
	else if (n==1){
		cout << "0 0 1" << endl;
		return 0;
	}
	else if(n==0){
		cout << "0 0 0" << endl;
		return 0;
	}
	n=indexOf(n);
	if(n>=4)cout << fib[n-4] << ' ' << fib[n-3] << ' ' << fib[n-1] << endl;	
	return 0;
}