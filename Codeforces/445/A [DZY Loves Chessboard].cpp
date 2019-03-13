#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int t[n][m];
    char a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
            
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2){
                if(j%2)t[i][j]=1;
                else t[i][j]=0;
            }
            else{
                if(j%2)t[i][j]=0;
                else t[i][j]=1;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                if(t[i][j]) cout << 'B';
                else cout << 'W';
            }
            else cout << a[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
}