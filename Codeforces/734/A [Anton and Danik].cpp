#include <bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n;
    cin >> n;

    char tmp;
    int cpt = 0;
    for(int i=0;i<n;i++){
        cin >> tmp;
        if(tmp=='A') cpt++;
        else if (tmp=='D') cpt--;
    }

    if(cpt>0) cout << "Anton" << endl;
    else if (cpt==0) cout << "Friendship" << endl;
    else cout << "Danik" << endl;

    return 0;
}
