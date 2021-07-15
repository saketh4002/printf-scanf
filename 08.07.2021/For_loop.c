#include<stdio.h>
int main(void)
{
  int i;
  printf("\n Using Increment\n");
  for(i=1; i<=10; i++)
    printf("%d ", i);

  printf("\n Using Decrement\n");
  for(i=10; i>=1; i--)
    printf("%d ", i);

  printf("\n Using Negative Terms\n");
  for(i=-10; i<=0; i++)
    printf("%d ", i);
  

  return 0;
}