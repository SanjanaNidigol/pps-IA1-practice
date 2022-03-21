#include<stdio.h>
int cmp(int a, int b, int c)
{
  int largest;
  if(a>b && a>c)
  {
    largest=a;
    return a;
  }
  else if (b>c)
  {
    largest =b;
    return b;
  }
  else
  {
    largest=c;
    return c;
  }
  return largest;
}
   
int input()
{
  int a;
  printf("enter any three numbers\n");
  scanf("%d",&a);
  return a;
}
void output(int a, int b, int c ,int largest)
{
  printf("%d is the largest number among the given numbers\n",largest);
}
int main()
{
int a,b,c,largest;
a=input();
b=input();
c=input();
largest=cmp(a,b,c);
output(a,b,c,largest);
return 0;
}