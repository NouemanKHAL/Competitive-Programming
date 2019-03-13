#include <algorithm>
#include <functional>
#include <array>
#include <iostream>


using namespace std;

int main(){
	int n;
	int sum=0;;
	int max=-1;

	cin >> n;

	int a[n];
	int b[n];

	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}

	for(int i=0;i<n;i++){
		sum+=b[i]-a[i];
		if(sum>max) max=sum;
	}

	cout << max;

    return 0;
}
