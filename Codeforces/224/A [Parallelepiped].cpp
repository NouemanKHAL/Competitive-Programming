#include <bits/stdc++.h>

using namespace std;

int main(){
	int t[3];
	cin >> t[0] >> t[1] >> t[2];
	sort(t,t+3);
	
	int x,y,z;
	int a,b,c;
	a=t[0];
	b=t[1];
	c=t[2];
	z=sqrt(c*b/a);
	y=c/z;
	x=a/y;
//	cout << "x:" << x << " y:" << y << " z:" << z <<endl;
	cout << 4*(x+y+z) << endl;

	return 0;
}