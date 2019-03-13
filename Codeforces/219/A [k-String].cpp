#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
using namespace std;

typedef long long ll;

int f[26];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int k;
    cin >> k;

    string s;
    cin >> s;

    if(k==1){
        cout << s << endl;
        return 0;
    }
    for(int i=0;i<s.length();i++) f[s[i]-'a']++;

    vector<int> v;

    for(int i=0;i<26;i++){
        if(f[i]%k){
            cout << "-1" << endl;
            return 0;
        }
    }

     for(int i=0;i<26;i++){
        if(f[i]) v.push_back(i);
    }
    if(v.size()==1){
        cout << s << endl;
        return 0;
    }
//    cout << s.length() << endl;
//    cout << v.size() << endl;
//    cout << f[v[0]] << endl;
//    cout << f[v[1]] << endl << endl;

    string tmp;
         for(int j=0;j<v.size();j++){
            for(int l=0;l<f[v[j]]/k;l++){
                tmp+=v[j]+'a';
            }
         }
    string res;
    while(k--){
        res+=tmp;
    }
    cout << res << endl;





	return 0;
}

