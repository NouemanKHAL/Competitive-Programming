#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif

    string a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int alen = a.length();
    int blen = b.length();
    int clen = c.length();

    vector<int> x(26,0),y(26,0),z(26,0);

    if(clen==alen+blen){
       for(int i=0;i<clen;i++){
            x[c[i]-'A']++;
       }
       for(int i=0;i<alen;i++){
            y[a[i]-'A']++;
       }
       for(int i=0;i<blen;i++){
            z[b[i]-'A']++;
       }

       for(int i=0;i<26;i++){
        //cout << i << " | "<< endl;
        //cout << c[i] << " " << a[i] << " " << b[i] << endl;
            if(x[i]!=y[i]+z[i]){
                cout << "NO" << endl;
                return 0;
            }
       }

       cout << "YES" << endl;
       return 0;


    }
    else{
        cout << "NO" << endl;
        return 0;
    }

    return 0;
}
