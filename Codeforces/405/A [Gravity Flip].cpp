#include <iostream>
#include <vector>
#include <algorithm>

#define all(x) x.begin(),x.end()

using namespace std;

int main(){
    
    int n; 
    cin >> n;
    vector<int> v(n);
    
    
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    sort(all(v));
    
     for(int i=0;i<n;i++){
         cout << v[i] << " ";
    }
    
    return 0;
}