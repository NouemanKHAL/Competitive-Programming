#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int cpt=0;
    int tab[4];
    
    for(int i=0;i<4;i++){
        cin >> tab[i];
    }
 
    sort(tab,tab+4);
    
    for(int i=0;i<3;i++){
        if(tab[i]==tab[i+1]) cpt++;
    }
    
 
    
    cout << cpt;
    
    return 0;
}