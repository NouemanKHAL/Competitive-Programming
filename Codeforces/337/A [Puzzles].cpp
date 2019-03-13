#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int  * t = new int[m];
    
    for(int i=0;i<m;i++){
        cin >> t[i];
    }
    
    sort(t,t+m);
    //  for(int i=0;i<m;i++){
    //     cout << t[i] << ' ';ndl;
    
    int min = t[m-1];
    
    for(int i=0;i<m-n+1;i++){
        for(int j=i+n-1;j<m;j++){
            if(t[j]-t[i]<min){
                min = t[j] - t[i];
            }
        }
    }
    
    cout << min << "\n";
    return 0;
}