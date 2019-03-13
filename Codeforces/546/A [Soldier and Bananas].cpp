#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int cost=(w*(w+1)*k)/(2);
    if(cost<n) cout << 0;
    else cout << cost-n;
    return 0;
}