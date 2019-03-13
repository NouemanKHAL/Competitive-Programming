#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    ll n,m;
    int a,b;
    ll ans = 0;
    cin >> n >> m >> a >> b;

    if(n%m==0){
        cout << ans << endl;
        return 0;
    }



    ans=((m-n%m)*a)>((n-n/m*m)*b) ? (n-n/m*m)*b : ((m-n%m)*a);

    cout << ans << endl;




    return 0;
}
