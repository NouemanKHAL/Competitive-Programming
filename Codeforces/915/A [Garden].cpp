#include <iostream>

using namespace std;

int main(){
    
    int n,k;
    cin >> n >> k;
    
    int v[n];
    int min=k;
    
    double ratio;
    
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==k){
            printf("1\n");
            return 0;
        }
        ratio = ((double)((double)k/(double)v[i])); 
   
        if( ratio ==(int)ratio ){
            if(min>ratio) min=ratio;
        } 
    }
    
    
    printf("%d\n",min);
    
    return 0;
}