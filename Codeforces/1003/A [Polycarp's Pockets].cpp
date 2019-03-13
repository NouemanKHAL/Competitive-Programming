#include <iostream>
using namespace std;
int f[101];
int main(){
    int n;
    cin >> n;
    
    int t[n];
    for(int i=0;i<n;i++){
        cin >> t[i];
        f[t[i]]++;
    }
    int max=0;
    for(int i=0;i<101;i++){
        if(f[i]>max) max=f[i];
    }
    cout << max << endl;
    
    return 0;
}