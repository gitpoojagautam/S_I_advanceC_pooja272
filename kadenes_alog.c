#include<stdio.h>
int main()
{
int a[6]={12,43,-2,-3,13,21};
int TS;
int i, j, sum ;
  TS = a[0];
  for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
  {
    sum = 0; 
    for(j=i;j<sizeof(a)/sizeof(a[0]);j++)
    {
      sum += a[j];

      if(sum>TS)
    {
      TS = sum;
    }
    }
  }
  printf("The maximum subarray sum is %d\n", TS);
  return 0;
}
