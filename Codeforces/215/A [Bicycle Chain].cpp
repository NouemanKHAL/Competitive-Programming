#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++) cin >> b[i];

    int maxR=0;
    for(int i=0;i<m;i++){
        double ratio;
        for(int j=0;j<n;j++){
            ratio=(double)b[i]/(double)a[j];
            if(ratio==(int)ratio){
                if(ratio>maxR) maxR=ratio;
            }
        }
    }
    int ans=0;
    for(int i=0;i<m;i++){
        double ratio;
        for(int j=0;j<n;j++){
            ratio=(double)b[i]/(double)a[j];
            if(ratio==maxR) ans++;
        }
    }

    cout << ans << endl;

	return 0;
}

