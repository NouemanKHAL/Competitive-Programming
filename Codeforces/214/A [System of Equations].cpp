#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n,m;
    cin >> n >> m;

    int cpt=0;
    for(int i=0;i<=(int)sqrt(n)+1;i++){
        for(int j=0;j<=(int)sqrt(m)+1;j++){
            if(i*i+j==n && i+j*j==m) cpt++;
        }
    }

    cout << cpt << endl;
	return 0;
}

