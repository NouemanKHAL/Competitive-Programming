#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    bool last=true;
    bool first=false;
    bool yes=false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        
            if(i%2!=0){
                cout << "#";
                continue;
            }
            
            if(j==1 && first){
                cout << "#";
                continue;
            }
            
            if(j==m && last){
                cout << "#";
                continue;
            }

            cout << ".";
        }
        
        if(i%2==0){
            first=!first;
            last=!last;
        }
    
        cout << endl;
    }
    return 0;
}