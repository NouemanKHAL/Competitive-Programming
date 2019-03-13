#include <iostream>
#include <deque>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	int tmp;
	deque< pair<int,int> > d;
	
	for(int i=1;i<=n;i++){
		cin >> tmp;
		d.push_back(make_pair(tmp,i));
	}
	
	while(!d.empty()){
		if(d.size()==1){
			cout << d.front().second << endl;
			return 0;		
		}
		if(d.front().first<=m){
			d.pop_front();
		}
		else{
			d.push_back(make_pair(d.front().first-m,d.front().second));
			d.pop_front();
		}
	}
	
	return 0;
}