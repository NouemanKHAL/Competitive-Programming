#include <iostream>

using namespace std;

int main(){
    int n,size;
    cin >> n;
    string words[n];
    string answer[n];

    for(int i=0;i<n;i++){
        cin >> words[i];
        size=words[i].length();
        if(size>10) {
            answer[i]=words[i][0]+to_string(size-2)+words[i][size-1];
        }
        else{
            answer[i]=words[i];
        }
    }

    for(int i=0;i<n;i++){
    	cout << answer[i] << endl;
    }







    return 0;
}
