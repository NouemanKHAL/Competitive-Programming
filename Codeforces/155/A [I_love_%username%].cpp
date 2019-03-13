#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mh make_heap
#define REP(x,n) for(int x=0 ; x<n ; x++)
#define REPR(x,n) for(int x=n ; x>0 ; x--)
#define readVec(v,i,n) REP(i,0,n) cin >> v[i]
#define printVec(v,i,n) REP(i,0,n) cout << v[i] << ' '
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
    int tmp;
    int min,max;
    cin >> tmp;
    min=tmp;
    max=tmp;
    int cpt = 0;
    for(int i=1;i<n;i++){
        cin >> tmp;
        if(tmp<min){
            min=tmp;
            cpt++;
        }
        if(tmp>max){
            max=tmp;
            cpt++;
        }
    }
    cout << cpt << endl;
    
    return 0;
}