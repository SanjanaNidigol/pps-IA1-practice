#include<stdio.h>
int input_n()
{
  int x;
  printf("Enter the number\n");
  scanf("%d", &x);
  return x;
}
int sum_n(int n)
{
 int i,sum=0;
 for(int i=1;i<=n;i++)
 sum=sum+i;
 return sum;
}
void output(int n, int sum)
{
  int i;
  for(int i=1;i<=n-1;i++)
  {
   printf("%d+",i);
  }
   printf("%d=%d\n",n,sum);
}
int main()
{
  int n, sum;
  n = input_n();
  sum = sum_n(n);
  output(n,sum);
}