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

const int MAXN = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

char t[21][15];

int main() {
   int n;
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
      scanf(" %s", t[i]);
   }

   int cpt = 2;
   int x = strcmp(t[0], t[1]);
   bool prev = (strcmp(t[0], t[1]) > 0);
   for (int i = 1; i < n - 1; i++) {
      if (prev != (strcmp(t[i], t[i + 1]) > 0)) break;
      cpt++;
   }

   if (cpt == n) {
      if (x < 0) {
         printf("INCREASING\n");
      }
      if (x > 0) {
         printf("DECREASING\n");
      }
   }
   else {
      printf("NEITHER\n");
   }

   return 0;
}
