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

    int n,a,b;
    cin >> n >> a >> b;

    int t[n+1];
    int cpt=0;
    for(int i=1;i<=n;i++){
        if(i>a && n-i<=b){
            cpt++;
        }
    }

    cout << cpt << endl;

	return 0;
}

