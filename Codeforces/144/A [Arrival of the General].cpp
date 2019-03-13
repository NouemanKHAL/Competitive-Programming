#include <bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    int n;
    cin >> n;

    int * t = new int[n];

    cin >> t[0];

    int min,max;
    min = max = t[0];

    for(int i=1;i<n;i++) {
        cin >> t[i];
        if(t[i]>max) max=t[i];
        if(t[i]<min) min=t[i];
    }

    bool nrstMax = false;

    int minIndex;

    for(int i=0;i<n;i++){
        // first max
        if(t[i]>=max && !nrstMax){
            max=i;
            nrstMax=true;
        }

        // last min
        if(t[i]<=min){
            minIndex=i;
        }
    }

    min = minIndex;

    int cpt = 0;

    if(max<min){
        cpt += max + (n-1-min);
    }
    else if(max>min){
        cpt += max + (n-1-min) - 1;
    }
    else {
        cpt = 0;
    }

    cout << cpt << endl;


    return 0;
}

