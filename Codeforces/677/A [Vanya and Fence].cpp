#include <iostream>

using namespace std;

int main(){
    
	int n,h;
	cin >> n >> h;
	int minWidth = 0;
	int tmp;
	
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(tmp<=h) minWidth++;
		else minWidth+=2;
	}
	
	cout << minWidth << endl;
    
    
    return 0;
}