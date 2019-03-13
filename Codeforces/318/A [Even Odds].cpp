#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main(){
    
   ulli n,k;
   cin >> n >> k;
   
   ulli middle = n%2 ? (n/2)+1 : (n/2);
   
   if ( k<=middle ){
       cout << 2*k - 1 << endl;
   }
   else cout << 2*(k-middle) << endl;
	
	return 0;
}