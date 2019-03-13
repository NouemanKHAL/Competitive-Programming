#include <iostream>

using namespace std;

int main(){
    
    string s,t;
    
    cin >> s >> t;
    
    int sizeOne = s.length();
    int sizeTwo = t.length();
    
    if ( sizeOne != sizeTwo ) {
        cout << "NO";
        return 0;
    }
    
    for ( int i = 0 , j = sizeOne - 1 ; i < sizeOne && j >= 0 ; i++ , j-- ) {
        if ( s[i] != t[j] ) {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    
    return 0;
}