#include <stdio.h>
int main(void)
{
  int num;
  printf("Enter a number OR Zero to END: ");
  scanf("%d", &num);
  while(num!=0);
  {
    printf("You entered %d \n", num);
    printf("Enter a number OR Zero to END: ");
    scanf("%d", &num);
  }

  printf("End of Program\n");
}
/*
while(COND)
        ;
        */