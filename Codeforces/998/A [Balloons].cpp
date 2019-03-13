#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("test.in","r",stdin);

    int n;
    cin >> n;

    vector<int> t(n);
    int minn=0;

    for(int i=0;i<n;i++){
        cin >> t[i];
        if(t[i]<t[minn]){
            minn=i;
        }
    }
    if(t.size()==1 || (t.size()==2 && t[0]==t[1])){
        cout << -1 << endl;
        return 0;
    }
    cout << 1 << endl;
    cout << minn+1 << endl;

	return 0;
}
