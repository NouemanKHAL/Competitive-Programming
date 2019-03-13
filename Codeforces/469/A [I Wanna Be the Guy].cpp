#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int tmp;
    
    int * cpt;
    cpt = (int*) calloc(n+1,sizeof(int));

    int p;
    cin >> p;
    


    for(int i=0;i<p;i++)
    {
        cin >> tmp;
        if(cpt[tmp]==0) cpt[tmp]++;
        
    }    
    
    int y;
    cin >> y;
    
    for(int i=0;i<y;i++)
    {
        cin >> tmp;
        if (cpt[tmp]==0) cpt[tmp]++;
        
    }

    for(int j=1;j<=n;j++)
    {
        if(cpt[j]==0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}
   

