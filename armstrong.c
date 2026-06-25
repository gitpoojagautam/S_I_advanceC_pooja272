#include<stdio.h>
#include<conio.h>
int main()
{
    int n=153,sum=0,power,j;
    int count = 0,rem;
    for(int temp=n;temp>0;temp=temp/10)
     {
        count++;
       // printf("\n %d",count);
     }
     for(int temp1=n;temp1>0;temp1=temp1/10)
     {
         rem=temp1%10;
         power=1;
         for(j=0;j<count;j++)
         {
            power=power*rem;
         }
         sum+=power;
     }
     if(sum==n)
     {
        printf("\n %d is an armstrong number",n);
     }
     else
     {
        printf("\n %d is not an armstrong number",n);
     } 
   
   return 0;
   getch(); 
}
