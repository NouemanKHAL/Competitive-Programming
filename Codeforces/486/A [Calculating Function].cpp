#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll res;
    if(n&1) res=-(n+1)/2;
    else res=n/2;
    cout << res << endl;
    return 0;
}