#include <algorithm>
#include <functional>
#include <array>
#include <iostream>


using namespace std;

void mySort(int a[], unsigned n)
{
    std::sort(a, a+n,greater<int>());
}

int main(){
    int n,j,tmp;
    cin >> n ;
    int t[n];
    
    for(int i=0;i<n;i++){
    	cin >> t[i];
    }

     mySort(t,n);
	
	// début 

	int c=1;
	int a;
	int x=0;
	for(int i=0;i<=n-c;i++)
	{
	    a=t[i];
	    j=c;
	    while(a<4)
	    {
	        a+=t[n-j];
	        if(a<=4)j++;
	    }
	    c=j;
	    x++;
	   
	}
	
	cout << x;


	return 0;
}