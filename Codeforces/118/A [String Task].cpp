#include <iostream>

using namespace std;

int main(){
	int k=0,i=0,j=0;
	string word;
	string answer;
	string voyel="AOYEUI";

	cin >> word;
	answer=word+word;
	int size=word.length();
	for(i=0;i<word.length();i++){
		for(j=0;j<voyel.length();j++){
			if(toupper(word[i])==voyel[j]){
				word.erase(word.begin()+i);
				i--;
			}
		}
	}

	i=0;
	j=0;
	int cpt=0;

	while(k<answer.length()){
		if(k%2==0 || k==0){
			answer[k]='.';
		}
		else{
			answer[k]=tolower(word[j]);
			j++;
		}
	k++;
	cpt++;
	}
	answer.erase(2*word.length(),answer.length()-2*word.length());
	cout << answer;
    return 0;
}
