#include <stdio.h>

int main() {
    int a,b,c,i ; // initialising all the variables required
    float d;
    int choice, fact ;
    printf("enter your choice \n");
    scanf("%d",&choice);// taking input for the operaion to be performed 
    switch (choice)
    {
        case 1:
        printf("Enter two digits for calculation \n");
        scanf("%d %d",&a,&b);
        c = a + b;
        printf("the addition is %d",c);
        break;

        case 2:
        printf("Enter two digits for calculation \n");
        scanf("%d %d",&a,&b);
        c = (a - b);
        printf("the substraction is %d",c);
        break;

        case 3:
        printf("Enter two digits for calculation \n");
        scanf("%d %d",&a,&b);
        c = a * b;
        printf("the multiplication is %d",c);
        break;


        case 4:
        printf("Enter dividend and divisor \n");
        printf("enter dividend\n");
        scanf("%d",&a);
        printf("enter divisor\n");
        scanf("%d",&b);
        if (b != 0)
        {
            d = a / b;
            printf("the division is %f",d);
        }
        else
        {
            printf("Invalid division \n");
        }
        break;

        case 5:
        printf("Enter digit for calculation \n");
        scanf("%d",&a);
        printf("%d \n",a * a);

        case 6:
        printf("Enter digit for calculation \n");
        scanf("%d",&a);
        fact = 1;
        for (i = 1;i <= a;i++)
        {
            fact = i * fact;
        }
        printf("the factorial is %d \n", fact);
    }
}