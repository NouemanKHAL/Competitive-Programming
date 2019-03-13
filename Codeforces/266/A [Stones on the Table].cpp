#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    
    int cpt=0;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]==str[i+1]) cpt++;
    }
    
    cout << cpt;
    
    return 0;
}