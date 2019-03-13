#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string t;
    cin >> t;
    
    
    multiset<string> m;
    
    string tmp="00";
    
    
    for(int i=0;i<n-1;i++){
    	tmp[0]=t[i];
    	tmp[1]=t[i+1];
    	m.insert(tmp);
	}
	int max=0;
    multiset<string>::iterator ind;
    
	for( auto i = m.begin(); i != m.end(); i++){
	    
	    if(m.count(*i)>max){
	        max = m.count(*i);
	    }   
	}

	for( auto i = m.begin(); i != m.end(); i++){
	    
	    if(m.count(*i)==max){
	        cout << *i;
	        return 0;
	    }   
	}
		
	
    return 0;
}