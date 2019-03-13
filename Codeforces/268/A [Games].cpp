#include <bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n;
    cin >> n;

    vector< pair<int,int> > v;
    int a,b;

    while(n--){
        cin >> a >> b;
        v.push_back( mp(a,b) );
    }

    n=v.size();

    int cpt = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i].F==v[j].S){
                cpt++;
            }
        }
    }

    cout << cpt << endl;

    return 0;
}
