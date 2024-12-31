#include <stdio.h>
int main()
{
    int days=389, years, weeks, hours;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    hours  = days * 24;
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    printf("Number of Hours: %d\n", hours);
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Nmber of Days: %d\n", days);
    return 0;
}
