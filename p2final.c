#include<stdio.h>
int cmp(int a,int b, int c)
{int largest;
  if (a>b)
  {
    if (a>c)
    {
      largest=a;
      return a;
    }
    else 
    {
      largest=c;
      return c;
    }
  }
  else
  {
    if(b>c)
    {
      largest=b;
      return b;
    }
    else 
    {
      largest=c;
      return c;
    }
  }
  return largest;
}
int input()
{
  int x;
  printf("Enter the three numbers\n");
  scanf("%d",&x);
  return x;
}
void output(int a, int b,int c, int largest)
{
  printf("%d is the largest number\n",largest);
}
int main()
{
  int a, b,c,largest;
  a = input();
  b = input();
  c = input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
}