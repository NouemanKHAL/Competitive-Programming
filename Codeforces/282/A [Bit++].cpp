#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int x=0;
	string statement[n];

	for(int i=0;i<n;i++){

		cin >> statement[i];

		for(int j=0;j<statement[i].length();j++){

			if(statement[i][j]=='+'){
				x++;
				break;
			}

			else if(statement[i][j]=='-'){
				x--;
				break;
			}

		}
	}

	cout << x;

	 return 0;
	}

