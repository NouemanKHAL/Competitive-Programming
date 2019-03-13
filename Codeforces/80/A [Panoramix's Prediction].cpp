#include <iostream>

using namespace std;

int main(){
    
    int n,m;
    cin >> n >> m;
    int tab[m+1];
    
    for(int i=2;i<=m;i++){
        tab[i]=i;
    }
    
    for(int i=2;i<n;i++){
        for(int j=2;j<=m;j++){
            if(tab[j]%i==0) tab[j]=0;
        }
    }
    
    int k;
    
    for(k=n+1;k<=m;k++){
        if(tab[k]!=0) break;
    }
    
    if(k==m) cout << "YES";
    else cout << "NO";
    
    return 0;
    
}