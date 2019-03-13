#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n ,m;
    cin >> n >> m;

    int oldM = m;
    int ans = 0;

    for(int i=0;i<=n;i++,m--){
        if(m==0){
            m=oldM;
            n++;
        }
        ans++;
    }

    cout << ans-1 << endl;


    return 0;
}
