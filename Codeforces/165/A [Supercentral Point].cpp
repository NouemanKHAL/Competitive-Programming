#include <iostream>
#include <deque>
using namespace std;

struct point{
	int x,y;
};

point p[200];

bool isSuper(int x, int n){
	int cpt=0;
	bool u=0,r=0,d=0,l=0;
	for(int i=0;i<n;i++){
		if(p[i].x==p[x].x && x!=i){
			if(p[i].y>p[x].y){
				r=true;
			}
			else{
				l=true;
			}
		}
		
		if(p[i].y==p[x].y && x!=i){
			if(p[i].x>p[x].x){
				d=true;
			}
			else{
				u=true;
			}
		}
	}
	
	return (u&&r&&d&&l);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> p[i].x >> p[i].y;
	}
	
	int cpt=0;
	
	for(int i=0;i<n;i++){
		if(isSuper(i,n)) cpt++;
	}
	
	cout << cpt << endl;
	
	return 0;
}