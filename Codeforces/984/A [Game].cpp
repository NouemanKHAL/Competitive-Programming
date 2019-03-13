#include <bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n;
    cin >> n;
    int * t = new int[n];

    for(int i = 0 ; i < n ; i++) {
        cin >> t[i];
    }

    for(int i=0;i<n-1;i++){

    }

    sort(t,t+n);

    if(n&1^1){
        cout << t[n/2-1] << endl;
    }
    else cout << t[n/2] << endl;

    return 0;
}
