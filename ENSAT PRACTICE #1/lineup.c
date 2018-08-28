#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool int
#define true 1
#define false 0

char t[22][15]; // 20 lines at most 12 chars each

int main() {

   int nbrOfElements, i;

   scanf("%d", &nbrOfElements);

   for (i = 0; i < nbrOfElements; i++) {
      scanf(" %s", t[i]);
   }

   int baseChangeRate = strcmp(t[0], t[1]);
   bool previousChangeRate = (strcmp(t[0], t[1]) > 0);
   int count = 2; // we already compared the first 2 elements

   // testing if we're keeping the same changeRate
   for (i = 1; i < nbrOfElements - 1; i++) {
      
      // if two previous elements were increasing
      // so should the current two elements

      currentChangeRate = ((strcmp(t[i], t[i + 1])) > 0);

      if (previousChangeRate != currentChangeRate ) break;

      count++;
   }

   if (count == nbrOfElements) { // if all elements have same changeRate

      if (baseChangeRate < 0) {
         printf("INCREASING\n");
      }

      if (baseChangeRate > 0) {
         printf("DECREASING\n");
      }
   }

   else {

      printf("NEITHER\n");

   }

   return 0;
}
