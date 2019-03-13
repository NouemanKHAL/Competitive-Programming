#include<bits/stdc++.h>

using namespace std;

int n, k, m, x, y;
bool visited[505][505];
char g[505][505];
int dx[] = { -1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int ans = 0,s=0;
bool inRange(int x, int y)
{
	return (x<n and y<k and x>=0 and y >= 0);
}

void dfs(int x, int y)
{
	if (ans  == s - m) return ;

	//if (!visited[x][y])  ans++;
	ans++;
	visited[x][y] = true;


	for (int i = 0; i < 4; i++)
	{	int xx = x + dx[i], yy = y + dy[i];
		if (!visited[xx][yy]  and inRange(xx, yy) and g[xx][yy]=='.') dfs(xx, yy);
	}


}

int main()
{  
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

	cin >> n >> k >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
		{
			cin >> g[i][j];
			if (g[i][j] == '.') {x = i; y = j;s++;};
		}

	dfs(x, y);
	for (int i = 0; i < n; i++)
	{	for (int j = 0; j < k; j++)
		{
			if (g[i][j]=='.' && visited[i][j]) cout << '.';
			else
				{    if(g[i][j]=='.') cout<<"X";
					 else cout << g[i][j];
				}
		}
		cout << "\n";
	}



	return 0;
}  