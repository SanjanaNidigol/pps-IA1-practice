#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the value\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0,i;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n, int sum)
{
  for(int i=1;i<=n-1;i++)
  {
    printf("%d+",i);
  }
  printf("%d=%d",i,sum);

}
int main()
{
  int a,b;
  a = input_n();
  b = sum_n(a);
  output(a,b);
  return 0;
  }