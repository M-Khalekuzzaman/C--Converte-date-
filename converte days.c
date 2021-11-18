#include<stdio.h>
int main()
{
    int days,months,years,weeks;
    printf("Enter your days :");
    scanf("%d",&days);

    years = days/365;
    months = (days%365)/30;
    weeks = (days%30)/7;
    days = days -((years*365) + (weeks*7)+(months*30));

    printf("Years : %d\n",years);
    printf("Months : %d\n",months);
    printf("Weeks : %d\n",weeks);
    printf("Days : %d\n",days);

    getch();
}
