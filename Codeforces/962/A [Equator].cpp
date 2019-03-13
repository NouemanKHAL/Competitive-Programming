#include <iostream>

using namespace std;

int main(){
    unsigned  int  n;
    cin >> n;
    unsigned  int tab[n];
    
    double sum = 0;
    for(unsigned int i=0;i<n;i++){
        cin >> tab[i];
        sum+=tab[i];
    }
    
    double sumTwo = 0;
    for(unsigned int i=0;i<n;i++){
        sumTwo+=tab[i];
        if(sumTwo>=sum/2){
            cout << i+1;
            return 0;
        }
    }
    
    return 0;
}