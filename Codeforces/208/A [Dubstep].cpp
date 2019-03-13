#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> v;
    bool found=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(v.size() && found) v.push_back(' ');
            i+=2;
            found=false;
            continue;
        }    
        found = true;
        v.push_back(s[i]);
    }
    
    for(auto c : v){
        cout << c;
    }
    cout << endl;
    return 0;
}