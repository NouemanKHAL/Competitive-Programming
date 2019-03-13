#include <iostream>

using namespace std;

int main()
{   
    int n;
    
    cin >> n;
    
    int tmp[n];
    
    int a = 0, b = 0;
    
    for(int i=0;i<n;i++){
        cin >> tmp[i];
        if(tmp[i]&1) b++;
        else a++;
    }
    
    for(int i=0;i<n;i++){
        if(a>b){
            if(tmp[i]&1){
                cout << i+1 << "\n";
                return 0;
            }
        }
        else{
            if(!(tmp[i]&1)){
                cout << i+1 << "\n";
                return 0;
            }
        }
    }
    
    return 0;
}