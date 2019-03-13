#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int y;
    cin >> y;
    
    int cpt[4]={0};
    
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int l=0;l<=9;l++){
                        int year = i*pow(10,3)+j*pow(10,2)+k*pow(10,1)+l;
                        if(i!=j && i!=k && i!=l && k!=l && k!=j && l!=j&& year > y){
                            cout << i << j << k << l << endl;
                            return 0;
                        }
                    }
             }
        }
    }
  return 0;
}