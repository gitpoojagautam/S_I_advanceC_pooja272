#include <stdio.h>

int main() {
    int day ,remainingDays ;
    int year ,week;
    printf("Enter number of days:");
    scanf("%d",&day);
    year= day/365;
    day = day % 365;

    week= day/7;
    remainingDays = day % 7;

    printf("Years is: %d\n",year);
    printf("Weeks is: %d\n",week);
    printf("Days is: %d",remainingDays);
    
    return 0;
}
