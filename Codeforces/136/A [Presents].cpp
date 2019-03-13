#include <iostream>

using namespace std;

int main(){
    
    int n;
    
    cin >>n;
    
    int tab[n];
    int res[n];
    
    for(int i=1;i<=n;i++){
        cin >> tab[i];
    }
    
    for(int i=1;i<=n;i++){
        res[tab[i]]=i;
    }
    
    for(int i=1;i<=n;i++){
        cout << res[i] << " ";
    }
    
    
    return 0;
}