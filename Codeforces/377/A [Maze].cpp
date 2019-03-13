#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int n,m,k;
const int N = 501;
bool v[N][N];
char g[N][N];

const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};

inline bool howahadak(int x, int y){
    return (x>=0 && x<n) && (y>=0 && y<m);
}

void print(){
    for(int i=0;i<n;i++) cout << g[i] << endl;
}

void dfs(int x, int y){
    if(v[x][y] || !k) return;
    v[x][y]=true;
    for(int i=0;i<4;i++){
        int xx,yy;
        xx=x+dx[i];
        yy=y+dy[i];
        if(howahadak(xx,yy) && !v[xx][yy] && g[xx][yy]=='.') dfs(xx,yy);
    }
    if(k){
        g[x][y]='X';
        k--;
    }

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("test.in","r",stdin);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m >> k;

    memset(v,0,sizeof(v[0][0])*m*n);

    for(int i=0;i<n;i++) cin >> g[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='.'){
                dfs(i,j);
            }
        }
    }

    print();



    return 0;
}
