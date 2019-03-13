#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define b begin
using namespace std;

typedef long long ll;

string s;

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

void rotate(int a, int b, int k){
	int size = b-a+1;
	string sub;
	for(int i=a-1;i<a+size-1;i++){
		sub.push_back(s[i]);
	}
	
	rightrotate(sub,k%size);
	
	int l=0;
	
	for(int t=0;t<size;t++){
		s[t+a-1]=sub[t];
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	
	int m;
	cin >> m;
	if(s.length()==1){
		cout << s << endl;
		return 0;
	}
	
	for(int i=0;i<m;i++){
		int l,r,k;
		cin >> l >> r >> k;
		if(l==r) continue;
		rotate(l,r,(k%(r-l+1)));
	}
	cout << s << endl;
			
	return 0;
}