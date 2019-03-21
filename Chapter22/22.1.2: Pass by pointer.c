#include <stdio.h>

void UpdateTimeWindow(int* timeStart, int* timeEnd, int offsetAmount){
   *timeStart += offsetAmount;
   *timeEnd += offsetAmount;
      
   return;  
}

/* Your solution goes here  */

int main(void) {
   int timeStart;
   int timeEnd;
   int offsetAmount;

   timeStart = 3;
   timeEnd = 7;
   offsetAmount = 2;
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   UpdateTimeWindow(&timeStart, &timeEnd, offsetAmount);
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   return 0;
}
