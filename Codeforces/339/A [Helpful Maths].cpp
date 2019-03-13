#include <iostream>

using namespace std;

int main(){
	int j=0;
	char tmp;
	string s;
	string answer;
	cin >> s;


	for(int i=0;i<s.length();i++,i++)
	{
		j=s.length()-1;
		while(i<j){
			if(s[i]>s[j])
			{
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		j--;
		j--;
		}
	}

	cout << s;

	 return 0;
}
