#include <bits/stdc++.h>
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.fi==b.fi){
        return a.se>b.se;
    }
    else return a.fi<b.fi;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  	
  	int s,n;
  	cin >> s >> n;
  	
  	vector< pair<int,int> > v(n);
  	for(int i=0;i<n;i++){
  	    cin >> v[i].fi >> v[i].se;
  	}
  	
  	sort(all(v),cmp);
  	
  	int cpt = 0;
  	int i;
  	for(i=0;i<n;i++){
  	    if(v[i].fi<s){
  	        s+=v[i].se;
  	    }
  	    else break;
  	}
  	
  	if(i==n){
  	    cout << "YES" << endl;
  	}
  	else cout << "NO" << endl;
  	
	return 0;
}