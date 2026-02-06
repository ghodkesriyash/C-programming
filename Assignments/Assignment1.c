#include <stdio.h>

int main()
{
int year; // declaring a variable to store the year
printf("enter a year: \n");
scanf("%d",&year);// taking input from user
if ((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0) )// condition to check for leap year
{
    printf("the year %d is a leap year \n",year);
}
else
{
    printf("the year %d is not a leap year",year);
}

return 0;// mandatory for int method 
}