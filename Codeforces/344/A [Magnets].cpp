#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif
    int n;
    cin >> n;
    string t[n];
    int cpt = 1;

    // reading input
    for(int i=0;i<n;i++) {
        cin >> t[i];
    }

    for(int i=1;i<n;i++) {
        if(t[i][0]==t[i-1][1]) cpt++;
    }

    cout << cpt << endl;

    return 0;
}
