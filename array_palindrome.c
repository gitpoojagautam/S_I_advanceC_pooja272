#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],rem,rev=1,count=0;
printf("Enter element in an array\n");
for(int i=0;i<6;i++)
{
    //printf("Enter element in an array\n");
    scanf("%d",&a[i]);
}
for(int j=0;j<6;j++)
{
    for(int temp=a[j];temp>0;temp/=10)
    {
        rem=temp%10;
        rev=rev*10+rem;
        rev=0;
    }
    if(rev==a[j])
    {
      count++;
    }}
    if(count>=1)
    {
     printf("array consist atleast one palindrome number");
    }
     else
    {
        printf("array does not consist atleast one palindrome number");
    }

getch();
}
