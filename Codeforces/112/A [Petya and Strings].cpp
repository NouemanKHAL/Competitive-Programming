#include <iostream>
#include <string>

using namespace std;

int main(){
	int i=0;
	int cpt=0;
    int cFirst=0;
	int cSecond=0;
	string first;
	string second;
	string alphabet="abcdefghijklmnopqrstuvwxyz";

	cin >> first >> second;

	while(tolower(first[i])==tolower(second[i])){
		i++;
		cpt++;
	}

	if(cpt<=first.length()-1)
	{
		for(int j=0;j<alphabet.length();j++)
		{
			if(tolower(first[i])==alphabet[j])
			{
				cFirst+=j;
			}

			if(tolower(second[i])==alphabet[j])
			{
				cSecond+=j;
			}
		}
	}



	if(cFirst>cSecond){
		cout << "1";
	}
	else{
		if (cFirst==cSecond){
			cout << "0";
		}
		else{
			cout << "-1";
		}
	}
	 return 0;
}
