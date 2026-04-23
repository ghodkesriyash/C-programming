#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter how many random numbers you want: ");

    // Check if scanf successfully read an integer
    if(scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;  // Exit the program with an error code
    }

    srand(time(NULL));
    printf("Pseudo Random Numbers:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}