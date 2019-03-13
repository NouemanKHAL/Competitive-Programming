#include <iostream>

using namespace std;


int main(){
    
    string s;
    cin >> s;
    bool trouveh=false;
    bool trouvee=false;
    bool trouvel=false;
    bool trouvell=false;
    bool trouveo=false;
    int cpt=0;
    int cptL=2;
    int index,indexe,indexl,indexll,indexo;
    for(int i=0;i<s.length();i++)
    {
        if(trouveo==true) break;
        
        if(s[i]=='h')
        {
            trouveh=true;
            for(int j=i+1;j<s.length();j++)
            {
                if(j>i && s[j]=='e' && trouvee==false)
                {
                    trouvee=true;
                    indexe=j;
                    continue;
                }
                
                if(j>indexe && trouvel==false && trouvee==true && s[j]=='l')
                {
                    trouvel=true;
                    indexl=j;
                    continue;
                }
                 if(j>indexl && trouvell==false && trouvel==true && s[j]=='l')
                {
                    trouvell=true;
                    indexll=j;
                    continue;
                }
                 if(j>indexll && trouveo==false && trouvell==true && s[j]=='o')
                {
                    trouveo=true;
                    indexo=j;
                }
                
                if(trouveo==true) break;
                
            }
        }
    }
    
    if(trouveo==true) cout << "YES";
    else cout << "NO";
    return 0;
}