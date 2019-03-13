#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define mh make_heap
#define REP(x,n) for(int x=0 ; x<n ; x++)
#define REPR(x,n) for(int x=n ; x>0 ; x--)
#define readVec(v,i,n) REP(i,0,n) cin >> v[i]
#define printVec(v,i,n) REP(i,0,n) cout << v[i] << ' '
#define debug(x) cout << x << endl;
#define debugg(x,b) cout << x << ' ' << b << endl;
#define endl "\n"

using namespace std;

typedef long long int ll;
typedef long double ld;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
}

int main(){
    fast();
    int n,h;
    cin >> n >> h;
    for(int i=1;i<n;i++){
        ld d=sqrt(i/(ld)n)*h;
        cout << setprecision(18) << d << ' '; 
    }
    return 0;
}