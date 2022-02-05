#include<stdio.h>
int input_array_size()
{
  int k;
  printf("Enter the size of array\n");
  scanf("%d",&k);
  return k;
}
void array_input(int n, int *a)
{
  printf("enter the numbers\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

}
int sum_n_arrays(int n,int a[n])
{
 int sum=0;
 for(int i=0;i<n;i++)
 {
   sum=sum+a[i];
 }
 return sum;
}
void out_put(int n, int a[n], int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d=%d",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  array_input(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
}


