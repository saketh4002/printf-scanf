#include<stdio.h>
int main(void)
{
  int num, sum, count;
  num=1;
  sum=0;
  count=1;
  do
  {
    printf("Enter %d Number: ",count);
    scanf("%d", &num);
    sum+=num;
    count++;
  }while(count<=10);
  printf("Sum is %d : ", sum);

  printf("\n Program Terminated\n");
  return 0;
}