#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int score[n];
    int cpt=0;

    for(int i=0;i<n;i++){
    	cin >> score[i];
    }

    for(int i=0;i<n;i++){
    	if(score[i]>=score[k-1] && score[i]>0) cpt++;

    }

    cout << cpt;

    return 0;
}
