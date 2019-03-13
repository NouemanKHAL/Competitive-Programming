#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    bool ok=true;
    int n,m;
    cin >> n >> m;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin >> t[i];
        if(t[i]!=0) ok=false;
    }
    sort(all(t));
    int ans = 0;

    for(int i=0;i<m;i++){
        if(t[i]<0) ans+=-1*(t[i]);
        if(t[i]>0){
            break;
        }
    }

    if(ans>=0) cout << ans << endl;
    else cout << 0 << endl;

	return 0;
}

