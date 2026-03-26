#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n;
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(NULL));  // seed with current time

    printf("Pseudo Random Numbers:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", rand());
    }
}
/*
while the list is to be entered by the user, he/she should leave a space between every integer 
*/