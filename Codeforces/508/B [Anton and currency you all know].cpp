#include <iostream>
#include <cstring>

#define MAX 100001

typedef unsigned long long int ulli;

using namespace std;

void swap(char* i, char * j)
{
    char tmp;
    tmp = *i;
    *i=*j;
    *j=tmp;
}


int main()
{
    int cpt=0;
    char tab[MAX+1];
    ulli i=0;
    ulli j=0;
    int k=0;
  
    cin >> tab;
    
    ulli len=strlen(tab)-1;
    ulli l;
    
    // lecture et detection des indices de chiffres pairs
        for(ulli y=0;y<len+1;y++)
        {
            if(tab[y]%2==0)
            {
                cpt++;
                l=y;
                break;
            }
        }
    
    // test de la condition de l'entrée ( existence de chiffres pairs)
        if(cpt==0)
        {
            cout << "-1" << endl;
            return 0;
        }
        
    // test de tout les swap possible entre last eleiment et un chiffre pair
    
        k=l;
        int index;
        
        while(k<len+1)
        { 
            
            if(tab[k]%2==0 && tab[k]<tab[len])
            
            {
                swap(tab+len,tab+k);
                cout <<  tab << endl;
                return 0;
            }
            
            if(tab[k]%2==0) index=k;
            
            k++;
        }
        
        swap(tab+len,tab+index);
        
        cout << tab << endl;
        return 0;
}