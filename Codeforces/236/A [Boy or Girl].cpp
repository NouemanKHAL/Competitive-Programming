#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    int n=str.length();
    
    int cpt=0;
    
    for(int i=0;i<n;i++)
    {
        cpt++;
        for(int j=0;j<i;j++)
        {
            if(str[j]==str[i])
            {
                cpt--;
                break;
            }
        }
        
    }
        
    if(cpt%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    
    return 0;
}

