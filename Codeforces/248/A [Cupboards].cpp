/*
ID: terrexo1
TASK: test
LANG: C++14               
*/

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
#define debug(x) cout << #x << " : " << x;
#define endl "\n"
#define N 101
typedef long long int ll;
typedef long double ld;

using namespace std;

/* up, right, down, left */
const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};

int t[N];

void swap(int i, int j){
    int tmp;
    tmp=t[i];
    t[i]=t[j];
    t[j]=tmp;
}   

void init(){
    for(int i=1;i<=N;i++) t[i]=i;
    for(int i=1;i<N;i+=2){
        swap(i,i+1);
    }
}

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int l[2],r[2];

inline int max(int i,int j){ return (i>j?i:j); }
inline int min(int i,int j){ return (i>j?j:i); }

int main(){
    fast();
    int n;
    cin >> n;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        l[a]++;
        r[b]++;
    }
    
    cout << min(l[0],l[1])+min(r[0],r[1]) << endl; 
    
    
    return 0;
}