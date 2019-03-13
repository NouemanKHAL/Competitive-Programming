#include <iostream>

using namespace std;

int main(){
	int firstTeam=0;
	int secondTeam=0;
	string answer;
	cin >> answer;
	for(int i=0;i<answer.length();i++)
	{
	   
		if(firstTeam>=7 || secondTeam>=7) break;
		else {if(answer[i]=='0'){
			firstTeam++;
			if(secondTeam<7)secondTeam=0;
				}

		else if(answer[i]=='1'){
			if(firstTeam<7)firstTeam=0;
			secondTeam++;
				}
			}

	}

	if(firstTeam>=7 || secondTeam>=7) cout << "YES";
	else cout << "NO";
	 return 0;
	}

