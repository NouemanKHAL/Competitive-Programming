#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define beg begin
#define fi first
#define se second
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define endl "\n"

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


int a[1001];

void echanger(int x, int y){
    int tmp;
    tmp=a[x];
    a[x]=a[y];
    a[y]=tmp;
}

void f(int x){
    if(x==1) return;
    echanger(x,x-1);
    f(x-1);
} 


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    int n;
    cin >> n;

    rep(i,n+1){
        a[i+1]=i+1;
    }

    f(n);

    rep(i,n){
        cout << a[i+1] << ' ';
    }

	
	return 0;
}