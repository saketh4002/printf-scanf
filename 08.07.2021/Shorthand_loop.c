
#include<stdio.h>
int main(void)
{
  int n;
  n=1;

  // pre-increment
  printf("PRE-INCREMENT\n-----------------");
  printf("n = %d\n", n);
  ++n;
  printf("n = %d\n", n);
  printf("n = %d\n", ++n);

  n=1;
  // post-increment
  printf("POST-INCREMENT\n-----------------");
  printf("n = %d\n", n);
  n++;
  printf("n = %d\n", n);
  printf("n = %d\n", n++);
  printf("n = %d\n", n);


  return 0;
}