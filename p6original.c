#include<stdio.h>
void input_two_string(char *a, char *b)
{
  printf("enter two stringds\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a, char *b)
{
  for(int i=0;a[i]!='\0';i++)
  {
    if (b[i]>a[i])
    return 1;
    else if (a[i]>b[i])
    return -1;
  }
  return 0;
}
void output(char *a, char *b, int result)
{
  if(result==1)
  printf("%s is greater than %s\n",a,b);
  else if (result==-1)
  printf("%s is equal to %s\n",a,b);
}
int main()
{
  char a[25],b[25];
  int x;
  input_two_string(a,b);
  x=strcmp(a,b);
  output(a,b,x);
  return 0;
}