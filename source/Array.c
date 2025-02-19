#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int i, j, value;
   int Data[7] = {5, 3, 4, 1, 7, 6, 8};
   int ArraySize = 7;

   printf("Printf data before sort \n\n");

   for (i = 0; i < ArraySize; i++) {
      printf(" %d", Data[i]);
   }

   printf("\n---------------------------\n");

	// command to find the minimum to maximum values
   // for loop
   for (i = 0; i < ArraySize; i++) {
      value = Data[i];
      for (j = i - 1; j >= 0; j--) {
         if (Data[j] <= value) break;
         {
            Data[j + 1] = Data[j];
         }
      }
      Data[j + 1] = value;
   }

   printf("Print data after sort \n\n");

   for (i = 0; i < ArraySize; i++) {
      printf(" %d", Data[i]);
   }
   
   return 0;
}  