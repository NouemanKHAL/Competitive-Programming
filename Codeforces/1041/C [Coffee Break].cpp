#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define MAXN 200005
using namespace std;
set<pii>  s;
int ass[MAXN];
int arr[MAXN];
int main()
{
	std::ios::sync_with_stdio(false);
	int n,m,d;
	cin>>n>>m>>d;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		s.insert(mp(arr[i],i));
	}


	int cnt=1;
	int pos;
	while(!s.empty()) {
		pos=s.begin()->s;
		ass[pos]=cnt;
		s.erase(s.begin());
		while(true) {
			auto it =s.lower_bound(mp(arr[pos]+d+1,0));
			if(it!=s.end()) {
				pos=it->s;
				ass[pos]=cnt;
			}
			else{
				break;
			}

			s.erase(it);
		}


		cnt++;
	}

	cout<<cnt-1<<endl;
	for (int i = 0; i <n; i++) {
		cout<<ass[i]<<" ";
	}

	return 0;
}
