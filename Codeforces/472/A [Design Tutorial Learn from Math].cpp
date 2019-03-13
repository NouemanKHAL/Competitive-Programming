#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e6+2;
bool prime[MAX];


void sieve()
{
    int n = MAX;
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("test.in", "r", stdin);
    #endif
    sieve();
    int n;
    cin >> n;

    int a,b;

    if(n&1^1) {
        a = n/2;
        b = a;
    }
    else{
        a = (n-1)/2;
        b = (n+1)/2;
    }
        while( (prime[a] || prime[b]) || (a==1 || b==1) || (a==n || b==n) ){

            // CONSTRAINTS
            if(a==1){
                a++;
                b--;
                continue;
            }
            if(b==1){
                b++;
                a--;
                continue;
            }
            if(a==n){
                a--;
                b++;
                continue;
            }
            if(b==n){
                b--;
                a++;
                continue;
            }

            if(prime[a]){
                if(!prime[a+1] && !prime[b-1]){
                    a++;
                    b--;
                    continue;
                }
                if(!prime[a-1] && !prime[b+1]){
                    a--;
                    b++;
                    continue;
                }
                a--;
                b++;
            }
            else if (prime[b]) {
                if(!prime[a+1] && !prime[b-1]){
                    a++;
                    b--;
                    continue;
                }
                 if(!prime[a-1] && !prime[b+1]){
                    a--;
                    b++;
                    continue;
                }
                a--;
                b++;

            }
        }

        cout << a << ' ' << b << endl;

    return 0;
}
