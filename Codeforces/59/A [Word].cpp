#include <iostream>
#include <cctype>

using namespace std;


int main(){
    
    string s;
    cin >> s;
    
    int lowCpt = 0;
    int uppCpt = 0; 
    
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z') lowCpt++;
        else uppCpt++;
    }
    
    for(int i=0;i<s.length();i++){
        if(lowCpt>=uppCpt){
            cout << (char)tolower(s[i]);
        }
        else{
            cout << (char)toupper(s[i]);
        }
    }
    
    return 0;
}