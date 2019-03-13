#include <iostream>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    
    int cpt=0;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='4' || s[i]=='7') cpt++;
    }
    
    if(cpt==4 || cpt==7) cout << "YES";
    else cout << "NO";

    
    return 0;
}