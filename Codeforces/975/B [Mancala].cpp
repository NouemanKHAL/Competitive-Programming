#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {
    
    ll tab[20];
    ll t[20];
    
    for(int i=0;i<14;i++){
        cin >> tab[i];
    }
    
    ll max=0;
    
    for(int i=0;i<14;i++){
    	
        if(tab[i]==0) continue;
              
        for(int i=0;i<14;i++){
        	t[i]=tab[i];
   		}
   		
        ll res = 0;
        
		ll tmp = t[i];
		
        t[i]=0;
        
      
        for(int j=0;j<14;j++){
            t[j] += tmp/14;
        }
        
        tmp%=14;
        
        int k = i + 1;
        
        for(int j=0;j<tmp;j++){
                if(k==14) k=0;
                t[k++]++;
        }
        

        for(int j=0;j<14;j++){
            
            if ( t[j]&1 ) continue;
            
            res+=t[j];
                
        }
        
    
            
        if(res>max) max=res;
    }
    

    cout << max << endl;
    
	return 0;
}