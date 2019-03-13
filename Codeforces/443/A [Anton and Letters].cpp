#include <bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef long long ll;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    set<char> s;

    string str;

    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]!='{' && str[i]!='}' && str[i]!=',' && str[i]!=' ') s.insert(str[i]);
    }

    cout << (int)s.size() << endl;
    return 0;
}
