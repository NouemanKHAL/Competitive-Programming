#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned long long int n,m,a,res;

    cin >> n >> m >> a;
    res = ceil((long double)n/a)*ceil((long double)m/a);
    cout << res;

    return 0;

}
