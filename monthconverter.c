#include <conio.h>
#include <stdio.h>
int main()
{
    int days, months, remaining_days;
    printf("^_^ WELCOME TO DAYS TO MONTH CONVERTER ^_^\n");
    printf("Enter number of days: ");
    scanf("%d",&days);
    months=days/30;
    remaining_days=days%30;
    printf("%d months and %d days",months,remaining_days);
    return 0;
}