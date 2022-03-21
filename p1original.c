#include<stdio.h>
void input(int *x, int *y)
{
  printf("Enter the value x and y\n");
  scanf("%d%d",x,y);
}
void add(int x, int y, int *sum)
{
  *sum = x + y;
}
void output(int x, int y, int sum)
{
  printf("the sum of %d and %d is %d",x,y,sum );
}
int main()
{
  int x,y,sum;
  input(&x,&y);
  add(x,y,&sum);
  output(x,y,sum);
}