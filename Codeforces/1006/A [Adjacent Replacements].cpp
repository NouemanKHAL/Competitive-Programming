#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define beg begin
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin >> n;

    int a;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a%2) cout << a << ' ';
        else cout << a-1 << ' ';
    }


	return 0;
}
