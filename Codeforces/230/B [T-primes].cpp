#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;

const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

bool isPrime(ll number){
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

bool isSqr(ll n) {
	return (sqrt(n) == (ll)sqrt(n));
}

bool isValid(ll x) {
	if(isSqr(x)){
		return isPrime(sqrt(x));
	} else {
		return false;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	
	ll x;

	for(int i = 0; i < n; ++i) {
		cin >> x;
		if(isValid(x)){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}


	return 0;
}
