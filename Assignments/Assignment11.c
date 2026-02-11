#include <stdio.h>
#include <math.h>

/*
choice 1 = Square root
choice 2 = Square
choice 3 = Cube
choice 4 = Prime number
choice 5 = Factorial
choice 6 = Prime factors
*/

int main()
{
    int a, i;
    int choice, fact, flag;
    int result;

    printf("Enter your choice:\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Prime Number Check\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");

    scanf("%d", &choice);

    switch (choice)
    {
        // Square root
        case 1:
            printf("Enter number:\n");
            scanf("%d", &a);
            result = sqrt(a);
            printf("Square root of %d is %d\n", a, result);
            break;

        // Square
        case 2:
            printf("Enter number:\n");
            scanf("%d", &a);
            printf("Square of %d is %d\n", a, a * a);
            break;

        // Cube
        case 3:
            printf("Enter number:\n");
            scanf("%d", &a);
            printf("Cube of %d is %d\n", a, a * a * a);
            break;

        // Prime number
        case 4:
            printf("Enter number:\n");
            scanf("%d", &a);

            flag = 0;

            if (a <= 1)
                flag = 1;
            else
            {
                for (i = 2; i <= sqrt(a); i++)
                {
                    if (a % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }

            if (flag == 0)
                printf("%d is a prime number\n", a);
            else
                printf("%d is not a prime number\n", a);

            break;

        // Factorial
        case 5:
            printf("Enter number:\n");
            scanf("%d", &a);

            fact = 1;
            for (i = 1; i <= a; i++)
                fact = fact * i;

            printf("Factorial of %d is %d\n", a, fact);
            break;

        // Prime factors
        case 6:
            printf("Enter number:\n");
            scanf("%d", &a);

            printf("Prime factors are:\n");

            while (a % 2 == 0)
            {
                printf("2 ");
                a = a / 2;
            }

            for (i = 3; i <= sqrt(a); i += 2)
            {
                while (a % i == 0)
                {
                    printf("%d ", i);
                    a = a / i;
                }
            }

            if (a > 2)
                printf("%d", a);

            printf("\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
