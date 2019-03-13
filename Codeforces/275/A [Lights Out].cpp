#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <list>
#include <cstring>
#include <cstdio>
#include <stack>
#include <queue>
#include <bitset>
#include <tuple>
#include <cassert>
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
#define debug(x) cout << #x << " : " << x;
#define endl "\n"

using namespace std;

int t[3][3];
int v[3][3];

void print(){
     REP(i,3){
        REP(j,3){
            if(v[i][j]%2) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }
}

inline bool isValid(int i, int j){
    return (i>=0 && j>=0)&&(i<3 && j<3);
}

/* up, right, down, left */
const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};

void solve(int a, int b){
    for(int i=0;i<4;i++){
        int xx=a+dx[i];
        int yy=b+dy[i];
        if(isValid(xx,yy)){
            v[a][b]+=t[xx][yy];
        }
    }
}

int main(){
    //assert(freopen("test.in","r",stdin));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> t[i][j];
            v[i][j]=t[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            solve(i,j);
        }
    }

    print();

    return 0;
}
