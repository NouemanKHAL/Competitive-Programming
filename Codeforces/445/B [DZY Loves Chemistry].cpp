#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> visited(51,false);

void dfs(int s, vector<int> adj[]){
    if(visited[s]) return ;
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        dfs(adj[s][i],adj);
    }
}


int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n, m, u, v;
    cin >> n >> m;

    if(n==1){
        cout << 1 << endl;
        return 0;
    }

    vector<int> adj[n+1];


    for(int i=1;i<=m;i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int nbr=0;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,adj);
            nbr++;
        }
        visited[i]=true;
    }

    cout << (long long)pow(2,n-nbr) << endl;

    return 0;
}
