#include <iostream>

using namespace std;

int main(){
	int n;
	int answer[3];
	int cpt;
	int nbrSolution=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cpt=0;
		cin >> answer[0] >> answer[1] >> answer[2];
		for(int j=0;j<3;j++){
			if(answer[j]==1) cpt++;
		}

		if(cpt>=2) nbrSolution++;
	}

	cout << nbrSolution;

    return 0;
}
