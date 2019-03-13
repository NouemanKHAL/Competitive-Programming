#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int T[n+1];
    
    for(int i=1;i<=n;i++){
        cin >> T[i];
    }
    
    int cpt = 0;
    
    for(int i=1;i<=n;){
        if(i==t){
            cout << "YES" << endl;
            return 0;
        }
        if(i>t){
            goto end;
        }
        i=i+T[i];
    }
    end:;
    cout << "NO" << endl;
    
    return 0;
}