#include <iostream>
#include <string>

using namespace std;
int main(){
    
    string str;
    bool trouve=false;
    getline(cin >> ws,str);
    
    for(int i=0;i<str.length();i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            trouve=true;
            break;
        } 
    }
    
    if(trouve==true) cout << "YES";
    else cout << "NO";
    
    return 0;
}