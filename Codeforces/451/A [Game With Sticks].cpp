#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n,m;
    cin >> n >> m;
    
    int cpt = 0;
    
    while(n*m>=1 && n && m){
        n--;
        m--;
        cpt++;
    }
    
    if((cpt&1)^1) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
    
    return 0;
}