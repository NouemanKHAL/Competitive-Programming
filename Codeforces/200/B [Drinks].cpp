#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0,tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        sum+=tmp;
    } 
    double res = (double)sum/n;
    cout << res << endl;
    
    return 0;
}