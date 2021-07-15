#include <stdio.h>
int main(void) {
  //int count;   // LCV : Loop Control Variable
  int count, num1, num2, sum;

  count=5; //LCV Initialization
  while(count>0) // LCV Checking OR Checking LOOP termination Condition
  {
    printf("Count  = %d\n", count);
    printf("Enter Numbers : ");
    scanf("%d %d", &num1, &num2);
    sum = num1+num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    count--;

    printf("%d times executed\n-------------------\n", (5-count));
  }
  return 0;
}