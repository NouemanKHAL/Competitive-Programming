#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n;
    cin >> n;
    unsigned int x = 0;
    for(int i=0;i<n;i++){
        char tmp;
        cin >> tmp;
        x|=1<<(toupper(tmp)-'A');
    }

    if(x==((1<<26)-1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
