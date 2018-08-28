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

char line[100];

int main() {

   while (fgets(line, 90, stdin)) {
      if (line[0] == 'EOF') return 0;
      for (int i = 0; i < 90; i++) if (isalpha(line[i])) line[i] = tolower(line[i]);
      if (strstr(line, "problem")) printf("yes\n");
      else printf("no\n");
   }


   return 0;
}
