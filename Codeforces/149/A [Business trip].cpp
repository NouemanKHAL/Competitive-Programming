#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int k;
    cin >> k;

    vector<int>t(12);
    for(int i=0;i<12;i++){
        cin >> t[i];
    }
    sort(t.rbegin(),t.rend());
    int cpt=0;
    int ans=0;
    for(int i=0;i<12;i++){
        if(cpt<k){
            cpt+=t[i];
            ans++;
        }
    }
    if(cpt<k){
        cout << "-1" << endl;
        return 0;
    }
    else{
        cout << ans << endl;
    }
	return 0;
}

