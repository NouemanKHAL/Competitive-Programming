#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mh make_heap
#define REP(x,n) for(int x=0 ; x<n ; x++)
#define REPR(x,n) for(int x=n ; x>0 ; x--)
#define readVec(v,i,n) REP(i,n) cin >> v[i]
#define printVec(v,i,n) REP(i,n) cout << v[i] << ' '
#define debug(x) cout << #x << " : " << x << endl;
#define endl "\n"

using namespace std;

typedef long long int ll;
typedef long double ld;


void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

inline int max(int i,int j){ return (i>j?i:j); }
inline int min(int i,int j){ return (i>j?j:i); }

int main(){
    fast();
    int n;
    cin >> n;
    vector<int> v(n);
    readVec(v,i,n);
    int m;
    cin >> m;
    int x;
    ll vas=0,pas=0;
    int t[n];

    for(int i=0;i<n;i++){
        t[v[i]]=i+1;
    }

    for(int i=0;i<m;i++){
        cin >> x;
        vas+=t[x];
        pas+=n-t[x]+1;
    }
    
    cout << vas << ' ' << pas << endl;
    return 0;
}