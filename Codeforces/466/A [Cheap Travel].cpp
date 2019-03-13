#include <bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int res;

    if(n==1){
        res=(a<b)?a:b;
    }
    else if((float)n*a<=((float)b/m)*n){
        res=n*a;
    }
    else{
        if(n>=m) res=(n/m)*b;
        else res=b;
    }

    if(n>=m){
        if(a<=b){
            res+=(n%m)*a;
        }
        else if(n%m){
            res+=b;
        }
    }

    cout << res << endl;

    return 0;
}
