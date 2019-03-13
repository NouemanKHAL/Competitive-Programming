#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define L(X) ((X)<<1)
#define R(X) (((X)<<1)|1)
#define M(X,Y) (((X)+(Y))>>1)

using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

int add(int x, int y) { return ((x % MOD)  + (y % MOD)) % MOD;             }
int mul(int x, int y) { return ((x % MOD) * (long long)(y % MOD)) % MOD;   }
int sub(int x, int y) { return add(x, -y + MOD);                           }

string input;
int freq[30];

void printFreq() {
   for (int i = 1; i < 27; ++i) {
      cout <<  (char)(i + 'a' - 1) << ' ';
   }	cout << endl;

   for (int i = 1; i < 27; ++i) {
      cout <<  freq[i] << ' ';
   }	cout << endl;

}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> input;

   int N = sz(input);

   for (int i = 0; i < N; ++i) {
      freq[input[i] - 'a' + 1]++;
   }

   //printFreq();

   for (int i = 1; i < 27; ++i) {
      if (freq[i] & 1) {
         for (int j = 26; j > i; --j) {
            if (freq[j] & 1) {
               freq[i] ++;
               freq[j] --;
               break;
            }
         }
      }
   }

   int idx = -1;
   for (int i = 1; i < 27; ++i) {
      if (freq[i] & 1) {
         idx = i;
         break;
      }
   }

   //printFreq();

   for (int i = 1; i < 27; ++i) {
      for (int j = 0; j < freq[i] / 2; ++j) {
         cout << (char)(i + 'a' - 1);
      }
      if (freq[i] & 1) freq[i] = freq[i] / 2 + 1;
      else freq[i] /= 2;


   }

   if (idx != -1) {
      cout << char(idx + 'a' - 1);
      freq[idx]--;
   }

   for (int i = 26; i > 0; --i) {
      for (int j = 0; j < freq[i]; ++j) {
         cout << (char)(i + 'a' - 1);
      }
   }



   return 0;
}


