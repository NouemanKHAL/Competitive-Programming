#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool int
#define true 1
#define false 0

int g[9][9]; // for safety 9 x 9

int posX[9], posY[9], nbrQueens = 0;

bool isValid(int x, int y) {
   return (x >= 0 && x < 8) && (y >= 0 && y < 8);
}

bool isAttacked(int x, int y) {
   // check column
   int i, j;
   for (i = 0; i < 8; i++) {
      if (i == x) continue;
      if (g[i][y] == 1) {
         return true;
      }
   }

   // check line
   for (j = 0; j < 8; j++) {
      if (j == y) continue;
      if (g[x][j] == 1) {
         return true;
      }
   }

   // check diagonal left
   for (i = 1; i < 8; i++) {
      if (isValid(x - i, y + i)) {
         if (g[x - i][y + i] == 1) {
            return true;
         }
      }
      if (isValid(x + i, y - i)) {
         if (g[x + i][y - i] == 1) {
            return true;
         }
      }
   }

   // check diagonal right
   for (i = 1; i < 8; i++) {
      if (isValid(x + i, y + i)) {
         if (g[x + i][y + i] == 1) {
            return true;
         }
      }
      if (isValid(x - i, y - i)) {
         if (g[x - i][y - i] == 1) {
            return true;
         }
      }
   }

   return false;
}

int main() {

   int i, j;
   char c;

   for (i = 0; i < 8; ++i) {
      for (j = 0; j < 8; ++j) {

         scanf(" %c", &c);
         if (c == '*') {
            g[i][j] = 1;
            posX[nbrQueens] = i;
            posY[nbrQueens] = j;
            nbrQueens++;
         }
         else {
            g[i][j] = 0;
         }
      }
   }

   if (nbrQueens != 8) {
      printf("invalid\n");
      return 0;
   }

   for (i = 0; i < nbrQueens; ++i) {
      if (isAttacked(posX[i], posY[i])) {
         printf("invalid\n");
         return 0;
      }
   }

   printf("valid\n");

   return 0;
}
