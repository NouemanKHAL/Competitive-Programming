#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    vector<int> v;
    
    v.push_back(a*b*c);
    v.push_back(a+b*c);
    v.push_back(a+(b*c));
    v.push_back(a*b+c);
    v.push_back((a+b)*c);
    v.push_back(a*(b+c));
    v.push_back(a+b+c);
    
    int max = 0 ;
    
    for(auto i : v){
        if(i>max) max=i;
    }
    
    cout << max << "\n";
    
   return 0;
}