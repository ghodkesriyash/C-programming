#include <stdio.h>
#include <math.h>

//LCA 1 
//code -- Assignment 11
/*
choice 1 = square
choice 2 = square root
choice 3 = factorial
choice 4 = prime no.
choice 5 = prime factors
choice 6 = cube */

int main()
{
int a ,choice, output;
int i, fact, flag;
double root;
printf("enter a choice: \n choice 1 = square \n choice 2 = square root \n choice 3 = factorial \n choice 4 = prime no. \n choice 5 = prime factors\n choice 6 = cube \n" );
scanf("%d", &choice);

switch (choice)
{
    //Square 
    case 1:
        printf("enter a number to find square \n");
        scanf("%d",&a);
        printf("the square is %d",a * a);
        break;

    //square root
    case 2:
        printf("enter a number to find square root \n");
        scanf("%d",&a);
        root = sqrt(a); 
        printf("the square root of %d is %.2lf",a, root);
        break;

    //Factorial
    case 3:
        printf("enter a number to factorial \n");
        scanf("%d",&a);
        fact = 1;
        i = 1;
        for(i;i <= a;i++)
        {
            fact = fact * i;
        }
        printf("the factorial is %d",fact);
        break;

    //Prime number
    case 4:
        printf("enter a number to check for prime number \n");
        scanf("%d",&a);
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

        //prime factors
        case 5:
        printf("enter a number to find prime factors: ");
            scanf("%d", &a);

            printf("Prime factors of %d are: ", a);

            for(i = 2; i <= a; i++)
            {
                while(a % i == 0)
                {
                    printf("%d ", i);
                    a = a / i;
                }
            }
            break;
    
    //cube
    case 6:
        printf("enter a number to find cube \n ");
        scanf("%d",&a);
        printf("the cube is %d",a * a * a);
        break;

}
}