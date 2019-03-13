#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    set<char> s;
    
    set<set<char>> l7wa;
    
    string t[n];
    
    
    int cpt = 0;
    
    for(int i=0;i<n;i++){
        cin >> t[i];
        for(int j=0;j<t[i].size();j++){
            s.insert(t[i][j]);
        }
        l7wa.insert(s);
        s.clear();
    }
      
    cout << l7wa.size() << endl;

    
    return 0;
}