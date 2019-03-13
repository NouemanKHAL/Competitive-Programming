#include <iostream>

using namespace std;

int main()
{
    int cpt=0;

    int n;
    cin >> n;

    int p,q;
    while(n--)
    {
        cin >> p >> q;
        if(q-p>=2) cpt++;
    }

    cout << cpt << endl;

    return 0;
}
