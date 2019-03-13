#include <bits/stdc++.h>

using namespace std;

int steps(int x){
    
    if(x<=1) return x;
    
    if(x>=5){
        return x/5 + steps(x%5);
    }
    else if(x>=4){
        return x/4 + steps(x%4);
    }
    else if (x>=3){
        return x/3 + steps(x%3);
    }
    else if (x>=2){
        return x/2 + steps(x%2);
    }
    
}

int main(){
    int x;
    cin >> x;
   
    int res = 0;
   
    res = steps(x);
   
    cout << res << endl;
    
    return 0;
}