#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int n;
    string str;
	cin >> n;
	cin.ignore();
	getline(cin, str);
	
	int j=0;
	
	int cpt[n];
	
	for (int i = 0; i < n; i++)
	{
     cpt[i] = 0;
    }

	for(int i=0;i<n;i++)
	{
		if(str[i]==' '){
			j++;
			continue;
		}
		if(str[i]==toupper(str[i]))
		{
			cpt[j]++;
		}

	}

	int max=-1;

	for(int i=0;i<n;i++)
	{
		if(cpt[i]>max) max=cpt[i];
	}
	cout << max;
    return 0;
}
