#include <iostream>
#include <cmath>
#define taille 5
using namespace std;


int main(){
    
    int matrix[taille][taille];
    int cordI,cordJ;
    
    for(int i=0;i<taille;i++)
    {
        for(int j=0;j<taille;j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j]==1)
            {
                cordI=i;
                cordJ=j;
            }
        }
    }
    cout << fabs(cordI-2)+fabs(cordJ-2);
    
    return 0;
}