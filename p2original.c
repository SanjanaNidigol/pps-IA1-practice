#include<stdio.h>
int cmp(int a,int b, int c)
{
  if (a>b)
  {
    if (a>c)
    {
      return a;
    }
    else 
    {
      return c;
    }
  }
  else
  {
    if(b>c)
    {
      return b;
    }
    else 
    {
      return c;
    }
  }
}
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
void output(int a, int b, int c, int largest)
{
  printf("%d is the largest number\n",largest);
}
int main()
{
  int a, b,c,largest;
  printf("Enter the three numbers\n");
  a = input();
  b = input();
  c = input();
  largest = cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}