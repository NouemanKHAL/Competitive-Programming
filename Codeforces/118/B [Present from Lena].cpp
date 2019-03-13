#include <bits/stdc++.h>
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  	   
  	int n;
  	cin >> n;
  	
  	
    for(int i=0;i<n+1;i++){
        for(int k=0;k<n-i;k++){
            cout << "  ";
        }
      
        
        if(!i){
            cout << '0';
            cout << endl;
            continue;
        }  
        
        cout << '0' << " ";
        
        stack<int> s;
        
        for(int j=1;j<=i;j++){
            if(j!=i) s.push(j);
            cout << j << " ";
        }
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << '0' << endl;
    }
    //
    
     for(int i=n-1;i>=0;i--){
        for(int k=0;k<n-i;k++){
            cout << "  ";
        }
        if(!i){
            cout << '0';
            continue;
        }
        
        cout << '0' << " ";
        
        stack<int> s;
        
        for(int j=1;j<=i;j++){
            if(j!=i) s.push(j);
            cout << j << " ";
        }
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << '0' << endl;
    }
 
    
	return 0;
}