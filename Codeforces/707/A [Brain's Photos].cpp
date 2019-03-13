#include <iostream>

using namespace std;

int main()
{
    int trouve=0;
    int n,m;
    cin >> n >> m ;

    char tab[n][m];
    
    int j=0;
    int i=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> tab[i][j];
            if(tab[i][j]=='C' || tab[i][j]=='M' || tab[i][j]=='Y')
            {
                trouve=1;
                break;
            }
        }
        if(trouve==1) break;
    }
    
    
    if(trouve==1) cout << "#Color";
    else cout << "#Black&White";
    return 0;
}