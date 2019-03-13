#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int solve(int a, int b){
    if(a<b) return 0;
    return a/b + solve(a%b+a/b,b);
}

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int a,b,ans;
    cin >> a >> b ;

    ans = a + solve(a,b);

    cout << ans << endl;

    return 0;
}
