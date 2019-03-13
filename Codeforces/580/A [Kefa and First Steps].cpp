#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c=n;
    int tab[n];
    for(int i=0;i<n;i++) cin >> tab[i];
    stack<int> s;
    
    s.push(tab[0]);
    
    int cpt = 1;
    int max = 1;
    
    for(int i=1;i<n;i++){
        if(tab[i]>=s.top()){
            s.push(tab[i]);
            cpt++;
            
        }
        else{
            if(cpt>max) max = cpt;
            cpt = 1;
            while(!s.empty()) s.pop();
            s.push(tab[i]);
        }
        
        if(cpt>max) max = cpt;
    }
    
    cout << max << endl;
    return 0;
}