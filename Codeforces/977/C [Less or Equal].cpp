#include <bits/stdc++.h>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    
    int tab[n];
    
    for(int i=0;i<n;i++){
    	cin >> tab[i];
	}
	

    
	sort(tab,tab+n);
	
	if(k==0){
	    if(tab[0]>1){
	        cout << 1 << endl;
	        return 0;
	    }
        cout << -1;
        return 0;
	}
	
	if(k==n){
	    cout << tab[n-1];
	    return 0;
	}
	
	int cpt = 0;
	int tmp = tab[k-1];
	
	for(int j=0;j<n;j++){
		if(tab[j]<=tmp) cpt++;
	}
	
	if(cpt==k && tmp<=1000000000) cout << tmp << endl;
	else  cout << "-1" << endl;
    
    return 0;
}